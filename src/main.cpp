#include "task.h"
#include <iostream>
#include <thread>
#include <chrono>
#include <random>
#include <stdexcept>

int main() {
    auto job = [](int workload) {
        if (workload <= 0) {
            throw std::invalid_argument("Invalid workload value");
        }

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<> dis(0.5, 1.5);

        for (int i = workload; i > 0; --i) {
            double sleep_time = dis(gen);
            std::this_thread::sleep_for(std::chrono::duration<double>(sleep_time));
            std::cout << "Completed step " << i << std::endl;
        }
    };

    try {
        execute(job, 10);
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}