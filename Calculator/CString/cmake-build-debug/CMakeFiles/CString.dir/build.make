# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/204/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/204/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/bit/Code/C C++/CString"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/bit/Code/C C++/CString/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CString.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/CString.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/CString.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CString.dir/flags.make

CMakeFiles/CString.dir/main.cpp.o: CMakeFiles/CString.dir/flags.make
CMakeFiles/CString.dir/main.cpp.o: ../main.cpp
CMakeFiles/CString.dir/main.cpp.o: CMakeFiles/CString.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/bit/Code/C C++/CString/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CString.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/CString.dir/main.cpp.o -MF CMakeFiles/CString.dir/main.cpp.o.d -o CMakeFiles/CString.dir/main.cpp.o -c "/home/bit/Code/C C++/CString/main.cpp"

CMakeFiles/CString.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CString.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/bit/Code/C C++/CString/main.cpp" > CMakeFiles/CString.dir/main.cpp.i

CMakeFiles/CString.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CString.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/bit/Code/C C++/CString/main.cpp" -o CMakeFiles/CString.dir/main.cpp.s

# Object files for target CString
CString_OBJECTS = \
"CMakeFiles/CString.dir/main.cpp.o"

# External object files for target CString
CString_EXTERNAL_OBJECTS =

CString: CMakeFiles/CString.dir/main.cpp.o
CString: CMakeFiles/CString.dir/build.make
CString: CMakeFiles/CString.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/bit/Code/C C++/CString/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable CString"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CString.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CString.dir/build: CString
.PHONY : CMakeFiles/CString.dir/build

CMakeFiles/CString.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CString.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CString.dir/clean

CMakeFiles/CString.dir/depend:
	cd "/home/bit/Code/C C++/CString/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/bit/Code/C C++/CString" "/home/bit/Code/C C++/CString" "/home/bit/Code/C C++/CString/cmake-build-debug" "/home/bit/Code/C C++/CString/cmake-build-debug" "/home/bit/Code/C C++/CString/cmake-build-debug/CMakeFiles/CString.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CString.dir/depend
