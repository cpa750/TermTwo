# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/cian/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5153.40/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/cian/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/183.5153.40/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/cian/Term Two/C++/Lab 6"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/cian/Term Two/C++/Lab 6/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Lab_6.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab_6.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab_6.dir/flags.make

CMakeFiles/Lab_6.dir/h1.cpp.o: CMakeFiles/Lab_6.dir/flags.make
CMakeFiles/Lab_6.dir/h1.cpp.o: ../h1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/cian/Term Two/C++/Lab 6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab_6.dir/h1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab_6.dir/h1.cpp.o -c "/home/cian/Term Two/C++/Lab 6/h1.cpp"

CMakeFiles/Lab_6.dir/h1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab_6.dir/h1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/cian/Term Two/C++/Lab 6/h1.cpp" > CMakeFiles/Lab_6.dir/h1.cpp.i

CMakeFiles/Lab_6.dir/h1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab_6.dir/h1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/cian/Term Two/C++/Lab 6/h1.cpp" -o CMakeFiles/Lab_6.dir/h1.cpp.s

# Object files for target Lab_6
Lab_6_OBJECTS = \
"CMakeFiles/Lab_6.dir/h1.cpp.o"

# External object files for target Lab_6
Lab_6_EXTERNAL_OBJECTS =

Lab_6: CMakeFiles/Lab_6.dir/h1.cpp.o
Lab_6: CMakeFiles/Lab_6.dir/build.make
Lab_6: CMakeFiles/Lab_6.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/cian/Term Two/C++/Lab 6/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Lab_6"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab_6.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab_6.dir/build: Lab_6

.PHONY : CMakeFiles/Lab_6.dir/build

CMakeFiles/Lab_6.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab_6.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab_6.dir/clean

CMakeFiles/Lab_6.dir/depend:
	cd "/home/cian/Term Two/C++/Lab 6/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/cian/Term Two/C++/Lab 6" "/home/cian/Term Two/C++/Lab 6" "/home/cian/Term Two/C++/Lab 6/cmake-build-debug" "/home/cian/Term Two/C++/Lab 6/cmake-build-debug" "/home/cian/Term Two/C++/Lab 6/cmake-build-debug/CMakeFiles/Lab_6.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Lab_6.dir/depend

