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
CMAKE_SOURCE_DIR = F:\test\C++\PrintFromTopToBottom

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\test\C++\PrintFromTopToBottom\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PrintFromTopToBottom.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PrintFromTopToBottom.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PrintFromTopToBottom.dir/flags.make

CMakeFiles/PrintFromTopToBottom.dir/main.cpp.obj: CMakeFiles/PrintFromTopToBottom.dir/flags.make
CMakeFiles/PrintFromTopToBottom.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\test\C++\PrintFromTopToBottom\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/PrintFromTopToBottom.dir/main.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\PrintFromTopToBottom.dir\main.cpp.obj -c F:\test\C++\PrintFromTopToBottom\main.cpp

CMakeFiles/PrintFromTopToBottom.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/PrintFromTopToBottom.dir/main.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E F:\test\C++\PrintFromTopToBottom\main.cpp > CMakeFiles\PrintFromTopToBottom.dir\main.cpp.i

CMakeFiles/PrintFromTopToBottom.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/PrintFromTopToBottom.dir/main.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S F:\test\C++\PrintFromTopToBottom\main.cpp -o CMakeFiles\PrintFromTopToBottom.dir\main.cpp.s

# Object files for target PrintFromTopToBottom
PrintFromTopToBottom_OBJECTS = \
"CMakeFiles/PrintFromTopToBottom.dir/main.cpp.obj"

# External object files for target PrintFromTopToBottom
PrintFromTopToBottom_EXTERNAL_OBJECTS =

PrintFromTopToBottom.exe: CMakeFiles/PrintFromTopToBottom.dir/main.cpp.obj
PrintFromTopToBottom.exe: CMakeFiles/PrintFromTopToBottom.dir/build.make
PrintFromTopToBottom.exe: CMakeFiles/PrintFromTopToBottom.dir/linklibs.rsp
PrintFromTopToBottom.exe: CMakeFiles/PrintFromTopToBottom.dir/objects1.rsp
PrintFromTopToBottom.exe: CMakeFiles/PrintFromTopToBottom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\test\C++\PrintFromTopToBottom\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable PrintFromTopToBottom.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PrintFromTopToBottom.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PrintFromTopToBottom.dir/build: PrintFromTopToBottom.exe

.PHONY : CMakeFiles/PrintFromTopToBottom.dir/build

CMakeFiles/PrintFromTopToBottom.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PrintFromTopToBottom.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PrintFromTopToBottom.dir/clean

CMakeFiles/PrintFromTopToBottom.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\test\C++\PrintFromTopToBottom F:\test\C++\PrintFromTopToBottom F:\test\C++\PrintFromTopToBottom\cmake-build-debug F:\test\C++\PrintFromTopToBottom\cmake-build-debug F:\test\C++\PrintFromTopToBottom\cmake-build-debug\CMakeFiles\PrintFromTopToBottom.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PrintFromTopToBottom.dir/depend

