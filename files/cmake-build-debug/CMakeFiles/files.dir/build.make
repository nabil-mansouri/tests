# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/nessim/projets/tests/files

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/nessim/projets/tests/files/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/files.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/files.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/files.dir/flags.make

CMakeFiles/files.dir/main.c.o: CMakeFiles/files.dir/flags.make
CMakeFiles/files.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/nessim/projets/tests/files/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/files.dir/main.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/files.dir/main.c.o   -c /Users/nessim/projets/tests/files/main.c

CMakeFiles/files.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/files.dir/main.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/nessim/projets/tests/files/main.c > CMakeFiles/files.dir/main.c.i

CMakeFiles/files.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/files.dir/main.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/nessim/projets/tests/files/main.c -o CMakeFiles/files.dir/main.c.s

CMakeFiles/files.dir/main.c.o.requires:

.PHONY : CMakeFiles/files.dir/main.c.o.requires

CMakeFiles/files.dir/main.c.o.provides: CMakeFiles/files.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/files.dir/build.make CMakeFiles/files.dir/main.c.o.provides.build
.PHONY : CMakeFiles/files.dir/main.c.o.provides

CMakeFiles/files.dir/main.c.o.provides.build: CMakeFiles/files.dir/main.c.o


# Object files for target files
files_OBJECTS = \
"CMakeFiles/files.dir/main.c.o"

# External object files for target files
files_EXTERNAL_OBJECTS =

files: CMakeFiles/files.dir/main.c.o
files: CMakeFiles/files.dir/build.make
files: CMakeFiles/files.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/nessim/projets/tests/files/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable files"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/files.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/files.dir/build: files

.PHONY : CMakeFiles/files.dir/build

CMakeFiles/files.dir/requires: CMakeFiles/files.dir/main.c.o.requires

.PHONY : CMakeFiles/files.dir/requires

CMakeFiles/files.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/files.dir/cmake_clean.cmake
.PHONY : CMakeFiles/files.dir/clean

CMakeFiles/files.dir/depend:
	cd /Users/nessim/projets/tests/files/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/nessim/projets/tests/files /Users/nessim/projets/tests/files /Users/nessim/projets/tests/files/cmake-build-debug /Users/nessim/projets/tests/files/cmake-build-debug /Users/nessim/projets/tests/files/cmake-build-debug/CMakeFiles/files.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/files.dir/depend

