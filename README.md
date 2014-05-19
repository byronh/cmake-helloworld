##CMake Hello World
This example project created for learning purposes uses Git submodules and CMake to include dependencies as static libraries in the build, allowing for easy cross-platform C++ development and deployment.

###Prerequisites

#####1. Download and install CMake
http://www.cmake.org/cmake/resources/software.html

#####2. Make sure that CMake is added to your PATH variables

#####3. Clone the repository
```
git clone --recursive https://github.com/byronh/cmake-helloworld.git
```

###Building

####Windows 32 & 64 bit

#####1. Build using CMake
```
mkdir build
cd build
cmake ..
```

#####2. Compile and run using Visual Studio
1. Open the solution file
2. Set "main" as the StartUp Project
3. Press F5 to Start Debugging

####Linux & Mac OS X

#####1. Build using CMake

```
mkdir build
cd build
cmake ..
```

#####2. Compile with makefile and run the executable
```
make
./main
```
