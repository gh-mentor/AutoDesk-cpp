This file describes the GitHub Actions workflow for building and testing the project on Windows using MSYS2 and MinGW.

Define the Workflow Name and Triggers:
- Set the workflow name to "Build and Test".
- Define the triggers for the workflow to run on push to the main branch, on pull_request, and on manual dispatch (workflow_dispatch).
Define the Job:
- Create a job named build-and-test that runs on windows-latest.
Add Steps to the Job:
Checkout the Repository:
- Use the actions/checkout@v4 action to checkout the repository.
Set up MSYS2:
- Use the msys2/setup-msys2@v2 action to set up MSYS2 with the required packages.
Add MSYS2 to PATH:
- Use a PowerShell command to add MSYS2 to the system PATH.
- example:  run: echo "C:\\msys64\\mingw64\\bin" >> $env:GITHUB_PATH
Configure CMake:
- Run the cmake command to configure the project with MinGW Makefiles.
Build the Project:
- Use mingw32-make to build the project.
Run Tests:
- Execute the test binary to run the tests.