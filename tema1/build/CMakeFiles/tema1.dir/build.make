# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/utzu/Desktop/paoo/tema1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/utzu/Desktop/paoo/tema1/build

# Include any dependencies generated for this target.
include CMakeFiles/tema1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tema1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tema1.dir/flags.make

CMakeFiles/tema1.dir/src/main.cpp.o: CMakeFiles/tema1.dir/flags.make
CMakeFiles/tema1.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/utzu/Desktop/paoo/tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tema1.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tema1.dir/src/main.cpp.o -c /home/utzu/Desktop/paoo/tema1/src/main.cpp

CMakeFiles/tema1.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tema1.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/utzu/Desktop/paoo/tema1/src/main.cpp > CMakeFiles/tema1.dir/src/main.cpp.i

CMakeFiles/tema1.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tema1.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/utzu/Desktop/paoo/tema1/src/main.cpp -o CMakeFiles/tema1.dir/src/main.cpp.s

CMakeFiles/tema1.dir/src/Player.cpp.o: CMakeFiles/tema1.dir/flags.make
CMakeFiles/tema1.dir/src/Player.cpp.o: ../src/Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/utzu/Desktop/paoo/tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/tema1.dir/src/Player.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tema1.dir/src/Player.cpp.o -c /home/utzu/Desktop/paoo/tema1/src/Player.cpp

CMakeFiles/tema1.dir/src/Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tema1.dir/src/Player.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/utzu/Desktop/paoo/tema1/src/Player.cpp > CMakeFiles/tema1.dir/src/Player.cpp.i

CMakeFiles/tema1.dir/src/Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tema1.dir/src/Player.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/utzu/Desktop/paoo/tema1/src/Player.cpp -o CMakeFiles/tema1.dir/src/Player.cpp.s

CMakeFiles/tema1.dir/src/Team.cpp.o: CMakeFiles/tema1.dir/flags.make
CMakeFiles/tema1.dir/src/Team.cpp.o: ../src/Team.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/utzu/Desktop/paoo/tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/tema1.dir/src/Team.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tema1.dir/src/Team.cpp.o -c /home/utzu/Desktop/paoo/tema1/src/Team.cpp

CMakeFiles/tema1.dir/src/Team.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tema1.dir/src/Team.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/utzu/Desktop/paoo/tema1/src/Team.cpp > CMakeFiles/tema1.dir/src/Team.cpp.i

CMakeFiles/tema1.dir/src/Team.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tema1.dir/src/Team.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/utzu/Desktop/paoo/tema1/src/Team.cpp -o CMakeFiles/tema1.dir/src/Team.cpp.s

# Object files for target tema1
tema1_OBJECTS = \
"CMakeFiles/tema1.dir/src/main.cpp.o" \
"CMakeFiles/tema1.dir/src/Player.cpp.o" \
"CMakeFiles/tema1.dir/src/Team.cpp.o"

# External object files for target tema1
tema1_EXTERNAL_OBJECTS =

tema1: CMakeFiles/tema1.dir/src/main.cpp.o
tema1: CMakeFiles/tema1.dir/src/Player.cpp.o
tema1: CMakeFiles/tema1.dir/src/Team.cpp.o
tema1: CMakeFiles/tema1.dir/build.make
tema1: CMakeFiles/tema1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/utzu/Desktop/paoo/tema1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable tema1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tema1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tema1.dir/build: tema1

.PHONY : CMakeFiles/tema1.dir/build

CMakeFiles/tema1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tema1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tema1.dir/clean

CMakeFiles/tema1.dir/depend:
	cd /home/utzu/Desktop/paoo/tema1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/utzu/Desktop/paoo/tema1 /home/utzu/Desktop/paoo/tema1 /home/utzu/Desktop/paoo/tema1/build /home/utzu/Desktop/paoo/tema1/build /home/utzu/Desktop/paoo/tema1/build/CMakeFiles/tema1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tema1.dir/depend

