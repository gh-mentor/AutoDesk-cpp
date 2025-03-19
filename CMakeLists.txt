cmake_minimum_required(VERSION 3.10)
project(PackagedTask)

set(CMAKE_CXX_STANDARD 11)

# Add the library target with the shared code
add_library(task_lib src/task.cpp)

# Add the main executable
add_executable(packaged_task src/main.cpp)

# Link the main executable with the library
target_link_libraries(packaged_task task_lib)

# Add the test executable
add_executable(test_task tests/test_task.cpp)

# Link the test executable with the library
target_link_libraries(test_task task_lib)