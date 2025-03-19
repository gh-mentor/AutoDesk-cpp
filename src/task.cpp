#include "task.h"
#include <thread>
#include <future>
#include <exception>

void execute(std::function<void(int)> t, int load) {
    // Create a packaged_task that wraps the function t
    std::packaged_task<void(int)> task(t);

    // Get the future associated with the packaged_task
    std::future<void> result = task.get_future();

    // Run the task on a separate thread
    std::thread taskThread(std::move(task), load);

    // Wait for the thread to finish
    taskThread.join();

    // Check if the task threw an exception and rethrow it if it did
    try {
        result.get();
    } catch (...) {
        throw;
    }
}