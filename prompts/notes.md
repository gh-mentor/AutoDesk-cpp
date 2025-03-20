Create a global C++ function 'execute' that runs a given task on a separate thread. Separate the implementation ('src/task.cpp') from the design ('src/task.h')
Arguments: 
t: a function that takes an integer as an argument and returns void.
load: an integer that is passed to the function t which is used to simulate a workload. 
Returns: void
Exceptions:
    The function will throw an exception if the task t throws an exception.

Use packaged task if fails



Modify 'src/main.cpp' such that 'main() contains a C++ lambda function  'job' that simulates a workload.
Arguments:
- 'workload': an integer representing the number of steps in the workload
Returns: void
Details:
- Use a 'for loop' to to simulate a workload by iterating from the given workload value down to 1. 
- For each iteration, it performs the following steps:
    1) Generates a random sleep time between 0.5 and 1.5 seconds.
    2) Pauses the execution for the generated sleep time.
    3) Prints a message indicating the completion of the current step.
Errors:
- If the workload is less than or equal to 0, the function should throw an invalid_argument exception with the message "Invalid workload value
Finally:
 Pass this lambda function as an argument to the 'execute' function with a workload of 10.

Create a 'doctest' test in a file 'tests/test_task.cpp' to test the task.
Requirements:
-  create and implement Mock function that displays a message to the console.
-  create and implement Mock function that throws an exception
Test cases:
- Test execute function. Include a simple assertion to ensure the test case runs successfully.
- Test execute function with exception

Create a CMakeLists.txt baed on the content of the 'src' and 'tests' folders