# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_SOURCE_DIR = "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/_2laba.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/_2laba.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/_2laba.dir/flags.make

CMakeFiles/_2laba.dir/main.cpp.o: CMakeFiles/_2laba.dir/flags.make
CMakeFiles/_2laba.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/_2laba.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_2laba.dir/main.cpp.o -c "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/main.cpp"

CMakeFiles/_2laba.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_2laba.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/main.cpp" > CMakeFiles/_2laba.dir/main.cpp.i

CMakeFiles/_2laba.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_2laba.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/main.cpp" -o CMakeFiles/_2laba.dir/main.cpp.s

CMakeFiles/_2laba.dir/Vector.cpp.o: CMakeFiles/_2laba.dir/flags.make
CMakeFiles/_2laba.dir/Vector.cpp.o: ../Vector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/_2laba.dir/Vector.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/_2laba.dir/Vector.cpp.o -c "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/Vector.cpp"

CMakeFiles/_2laba.dir/Vector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/_2laba.dir/Vector.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/Vector.cpp" > CMakeFiles/_2laba.dir/Vector.cpp.i

CMakeFiles/_2laba.dir/Vector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/_2laba.dir/Vector.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/Vector.cpp" -o CMakeFiles/_2laba.dir/Vector.cpp.s

# Object files for target _2laba
_2laba_OBJECTS = \
"CMakeFiles/_2laba.dir/main.cpp.o" \
"CMakeFiles/_2laba.dir/Vector.cpp.o"

# External object files for target _2laba
_2laba_EXTERNAL_OBJECTS =

_2laba: CMakeFiles/_2laba.dir/main.cpp.o
_2laba: CMakeFiles/_2laba.dir/Vector.cpp.o
_2laba: CMakeFiles/_2laba.dir/build.make
_2laba: CMakeFiles/_2laba.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable _2laba"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/_2laba.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/_2laba.dir/build: _2laba

.PHONY : CMakeFiles/_2laba.dir/build

CMakeFiles/_2laba.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/_2laba.dir/cmake_clean.cmake
.PHONY : CMakeFiles/_2laba.dir/clean

CMakeFiles/_2laba.dir/depend:
	cd "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba" "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba" "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/cmake-build-debug" "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/cmake-build-debug" "/Users/zannarui/Desktop/ИТМО/2 семестр/Лабы по проге/ 2laba/cmake-build-debug/CMakeFiles/_2laba.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/_2laba.dir/depend

