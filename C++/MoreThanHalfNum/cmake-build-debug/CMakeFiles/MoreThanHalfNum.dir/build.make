# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\test\C++\MoreThanHalfNum

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\test\C++\MoreThanHalfNum\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MoreThanHalfNum.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MoreThanHalfNum.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MoreThanHalfNum.dir/flags.make

CMakeFiles/MoreThanHalfNum.dir/main.cpp.obj: CMakeFiles/MoreThanHalfNum.dir/flags.make
CMakeFiles/MoreThanHalfNum.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\test\C++\MoreThanHalfNum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MoreThanHalfNum.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MoreThanHalfNum.dir\main.cpp.obj -c F:\test\C++\MoreThanHalfNum\main.cpp

CMakeFiles/MoreThanHalfNum.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MoreThanHalfNum.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\test\C++\MoreThanHalfNum\main.cpp > CMakeFiles\MoreThanHalfNum.dir\main.cpp.i

CMakeFiles/MoreThanHalfNum.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MoreThanHalfNum.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\test\C++\MoreThanHalfNum\main.cpp -o CMakeFiles\MoreThanHalfNum.dir\main.cpp.s

# Object files for target MoreThanHalfNum
MoreThanHalfNum_OBJECTS = \
"CMakeFiles/MoreThanHalfNum.dir/main.cpp.obj"

# External object files for target MoreThanHalfNum
MoreThanHalfNum_EXTERNAL_OBJECTS =

MoreThanHalfNum.exe: CMakeFiles/MoreThanHalfNum.dir/main.cpp.obj
MoreThanHalfNum.exe: CMakeFiles/MoreThanHalfNum.dir/build.make
MoreThanHalfNum.exe: CMakeFiles/MoreThanHalfNum.dir/linklibs.rsp
MoreThanHalfNum.exe: CMakeFiles/MoreThanHalfNum.dir/objects1.rsp
MoreThanHalfNum.exe: CMakeFiles/MoreThanHalfNum.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\test\C++\MoreThanHalfNum\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MoreThanHalfNum.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MoreThanHalfNum.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MoreThanHalfNum.dir/build: MoreThanHalfNum.exe

.PHONY : CMakeFiles/MoreThanHalfNum.dir/build

CMakeFiles/MoreThanHalfNum.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MoreThanHalfNum.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MoreThanHalfNum.dir/clean

CMakeFiles/MoreThanHalfNum.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\test\C++\MoreThanHalfNum F:\test\C++\MoreThanHalfNum F:\test\C++\MoreThanHalfNum\cmake-build-debug F:\test\C++\MoreThanHalfNum\cmake-build-debug F:\test\C++\MoreThanHalfNum\cmake-build-debug\CMakeFiles\MoreThanHalfNum.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MoreThanHalfNum.dir/depend
