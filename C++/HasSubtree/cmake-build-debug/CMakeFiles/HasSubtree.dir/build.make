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
CMAKE_SOURCE_DIR = F:\test\C++\HasSubtree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\test\C++\HasSubtree\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/HasSubtree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/HasSubtree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/HasSubtree.dir/flags.make

CMakeFiles/HasSubtree.dir/main.cpp.obj: CMakeFiles/HasSubtree.dir/flags.make
CMakeFiles/HasSubtree.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\test\C++\HasSubtree\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/HasSubtree.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\HasSubtree.dir\main.cpp.obj -c F:\test\C++\HasSubtree\main.cpp

CMakeFiles/HasSubtree.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/HasSubtree.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\test\C++\HasSubtree\main.cpp > CMakeFiles\HasSubtree.dir\main.cpp.i

CMakeFiles/HasSubtree.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/HasSubtree.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\test\C++\HasSubtree\main.cpp -o CMakeFiles\HasSubtree.dir\main.cpp.s

# Object files for target HasSubtree
HasSubtree_OBJECTS = \
"CMakeFiles/HasSubtree.dir/main.cpp.obj"

# External object files for target HasSubtree
HasSubtree_EXTERNAL_OBJECTS =

HasSubtree.exe: CMakeFiles/HasSubtree.dir/main.cpp.obj
HasSubtree.exe: CMakeFiles/HasSubtree.dir/build.make
HasSubtree.exe: CMakeFiles/HasSubtree.dir/linklibs.rsp
HasSubtree.exe: CMakeFiles/HasSubtree.dir/objects1.rsp
HasSubtree.exe: CMakeFiles/HasSubtree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\test\C++\HasSubtree\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable HasSubtree.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\HasSubtree.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/HasSubtree.dir/build: HasSubtree.exe

.PHONY : CMakeFiles/HasSubtree.dir/build

CMakeFiles/HasSubtree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\HasSubtree.dir\cmake_clean.cmake
.PHONY : CMakeFiles/HasSubtree.dir/clean

CMakeFiles/HasSubtree.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\test\C++\HasSubtree F:\test\C++\HasSubtree F:\test\C++\HasSubtree\cmake-build-debug F:\test\C++\HasSubtree\cmake-build-debug F:\test\C++\HasSubtree\cmake-build-debug\CMakeFiles\HasSubtree.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/HasSubtree.dir/depend

