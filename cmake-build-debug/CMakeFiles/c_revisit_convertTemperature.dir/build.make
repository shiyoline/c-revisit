# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c_revisit_convertTemperature.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c_revisit_convertTemperature.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c_revisit_convertTemperature.dir/flags.make

CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.o: CMakeFiles/c_revisit_convertTemperature.dir/flags.make
CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.o: ../ConvertTemperature.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.o   -c /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/ConvertTemperature.c

CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/ConvertTemperature.c > CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.i

CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/ConvertTemperature.c -o CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.s

# Object files for target c_revisit_convertTemperature
c_revisit_convertTemperature_OBJECTS = \
"CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.o"

# External object files for target c_revisit_convertTemperature
c_revisit_convertTemperature_EXTERNAL_OBJECTS =

c_revisit_convertTemperature: CMakeFiles/c_revisit_convertTemperature.dir/ConvertTemperature.c.o
c_revisit_convertTemperature: CMakeFiles/c_revisit_convertTemperature.dir/build.make
c_revisit_convertTemperature: CMakeFiles/c_revisit_convertTemperature.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable c_revisit_convertTemperature"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c_revisit_convertTemperature.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c_revisit_convertTemperature.dir/build: c_revisit_convertTemperature

.PHONY : CMakeFiles/c_revisit_convertTemperature.dir/build

CMakeFiles/c_revisit_convertTemperature.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c_revisit_convertTemperature.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c_revisit_convertTemperature.dir/clean

CMakeFiles/c_revisit_convertTemperature.dir/depend:
	cd /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/cmake-build-debug /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/cmake-build-debug /Users/aruko/Desktop/programming-related/my-github-repos/c-programming/c-revisit/cmake-build-debug/CMakeFiles/c_revisit_convertTemperature.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c_revisit_convertTemperature.dir/depend

