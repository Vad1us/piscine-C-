# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/vradchen/work/piscine/d01/ex07clion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/vradchen/work/piscine/d01/ex07clion/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ex07clion.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ex07clion.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ex07clion.dir/flags.make

CMakeFiles/ex07clion.dir/main.cpp.o: CMakeFiles/ex07clion.dir/flags.make
CMakeFiles/ex07clion.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/vradchen/work/piscine/d01/ex07clion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ex07clion.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ex07clion.dir/main.cpp.o -c /Users/vradchen/work/piscine/d01/ex07clion/main.cpp

CMakeFiles/ex07clion.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ex07clion.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/vradchen/work/piscine/d01/ex07clion/main.cpp > CMakeFiles/ex07clion.dir/main.cpp.i

CMakeFiles/ex07clion.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ex07clion.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/vradchen/work/piscine/d01/ex07clion/main.cpp -o CMakeFiles/ex07clion.dir/main.cpp.s

# Object files for target ex07clion
ex07clion_OBJECTS = \
"CMakeFiles/ex07clion.dir/main.cpp.o"

# External object files for target ex07clion
ex07clion_EXTERNAL_OBJECTS =

ex07clion: CMakeFiles/ex07clion.dir/main.cpp.o
ex07clion: CMakeFiles/ex07clion.dir/build.make
ex07clion: CMakeFiles/ex07clion.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/vradchen/work/piscine/d01/ex07clion/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ex07clion"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex07clion.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ex07clion.dir/build: ex07clion

.PHONY : CMakeFiles/ex07clion.dir/build

CMakeFiles/ex07clion.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ex07clion.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ex07clion.dir/clean

CMakeFiles/ex07clion.dir/depend:
	cd /Users/vradchen/work/piscine/d01/ex07clion/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/vradchen/work/piscine/d01/ex07clion /Users/vradchen/work/piscine/d01/ex07clion /Users/vradchen/work/piscine/d01/ex07clion/cmake-build-debug /Users/vradchen/work/piscine/d01/ex07clion/cmake-build-debug /Users/vradchen/work/piscine/d01/ex07clion/cmake-build-debug/CMakeFiles/ex07clion.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ex07clion.dir/depend

