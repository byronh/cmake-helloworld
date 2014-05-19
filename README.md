##CMake Hello World
This example project created for learning purposes uses Git submodules and CMake to include dependencies as static libraries in the build, allowing for easy cross-platform C++ development and deployment.

###Prerequisites

#####1. Download and install CMake
http://www.cmake.org/cmake/resources/software.html

#####2. Make sure that CMake is added to your PATH

#####3. Clone the repository
```
git clone --recursive https://github.com/byronh/cmake-helloworld.git
```

###Building

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

####Windows 32 & 64 bit

#####1. Choose the CMake generator according to your system (32 or 64 bit) and installed version of Visual Studio:

Visual Studio 12 = Visual Studio 2013 32-bit  
Visual Studio 12 Win64 = Visual Studio 2013 64-bit  
Visual Studio 11 = Visual Studio 2012 32-bit  
Visual Studio 11 Win64 = Visual Studio 2012 64-bit  
Visual Studio 10 = Visual Studio 2010 32-bit  
Visual Studio 10 Win64 = Visual Studio 2010 64-bit  
Visual Studio 9 = Visual Studio 2008  
Visual Studio 8 = Visual Studio 2005  

For example, "Visual Studio 12 Win64" targets Visual Studio 2013 on 64-bit systems. Refer to the following link for more information:

http://www.cmake.org/cmake/help/v2.8.8/cmake.html#section_Generators

Alternatively you could just use something more sane such as [MinGW] (http://www.mingw.org/);

#####2. Build using CMake
```
mkdir build
cd build
cmake .. -G "Visual Studio 12 Win64"
```

#####3. Compile and run using Visual Studio
1. Open "cmake-helloworld.sln" in the "build" folder
2. Set "main" as the StartUp Project
3. Press F5 to Start Debugging


