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
CMAKE_SOURCE_DIR = F:\test\C++\MergeList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\test\C++\MergeList\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MergeList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MergeList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MergeList.dir/flags.make

CMakeFiles/MergeList.dir/main.cpp.obj: CMakeFiles/MergeList.dir/flags.make
CMakeFiles/MergeList.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\test\C++\MergeList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MergeList.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\MergeList.dir\main.cpp.obj -c F:\test\C++\MergeList\main.cpp

CMakeFiles/MergeList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MergeList.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\test\C++\MergeList\main.cpp > CMakeFiles\MergeList.dir\main.cpp.i

CMakeFiles/MergeList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MergeList.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\test\C++\MergeList\main.cpp -o CMakeFiles\MergeList.dir\main.cpp.s

# Object files for target MergeList
MergeList_OBJECTS = \
"CMakeFiles/MergeList.dir/main.cpp.obj"

# External object files for target MergeList
MergeList_EXTERNAL_OBJECTS =

MergeList.exe: CMakeFiles/MergeList.dir/main.cpp.obj
MergeList.exe: CMakeFiles/MergeList.dir/build.make
MergeList.exe: CMakeFiles/MergeList.dir/linklibs.rsp
MergeList.exe: CMakeFiles/MergeList.dir/objects1.rsp
MergeList.exe: CMakeFiles/MergeList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\test\C++\MergeList\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable MergeList.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\MergeList.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MergeList.dir/build: MergeList.exe

.PHONY : CMakeFiles/MergeList.dir/build

CMakeFiles/MergeList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\MergeList.dir\cmake_clean.cmake
.PHONY : CMakeFiles/MergeList.dir/clean

CMakeFiles/MergeList.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\test\C++\MergeList F:\test\C++\MergeList F:\test\C++\MergeList\cmake-build-debug F:\test\C++\MergeList\cmake-build-debug F:\test\C++\MergeList\cmake-build-debug\CMakeFiles\MergeList.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MergeList.dir/depend

