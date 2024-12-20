# Bouncing Square Render
I am using a simple template for SFML projects: https://github.com/SFML/cmake-sfml-project

### Dependencies
- You will need a build system of your choice, I'm using cmake.
- You will also need to have SFML installed.

### How to Run
1. Clone the repository
2. Create a separate build directory, this is where your compiled code will live. `mkdir build`
3. Go into the build directory `cd build`
4. Initialize cmake for your project `cmake ..`
5. Now compile your project `make`
6. In the build directory there should be a bin folder, and inside that is the compiled code. To run it, execute `./bin/main`

### One Executable After Cloning the Repo
`mkdir build && cd build && cmake .. && make && ./bin/main`