# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

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
CMAKE_COMMAND = /scratch/shared/apps/cmake/bin/cmake

# The command to remove a file.
RM = /scratch/shared/apps/cmake/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /scratch/users/md724/igraph_project

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /scratch/users/md724/igraph_project/build

# Include any dependencies generated for this target.
include CMakeFiles/main_tsv.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main_tsv.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main_tsv.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main_tsv.dir/flags.make

CMakeFiles/main_tsv.dir/src/main_tsv.cpp.o: CMakeFiles/main_tsv.dir/flags.make
CMakeFiles/main_tsv.dir/src/main_tsv.cpp.o: /scratch/users/md724/igraph_project/src/main_tsv.cpp
CMakeFiles/main_tsv.dir/src/main_tsv.cpp.o: CMakeFiles/main_tsv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main_tsv.dir/src/main_tsv.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main_tsv.dir/src/main_tsv.cpp.o -MF CMakeFiles/main_tsv.dir/src/main_tsv.cpp.o.d -o CMakeFiles/main_tsv.dir/src/main_tsv.cpp.o -c /scratch/users/md724/igraph_project/src/main_tsv.cpp

CMakeFiles/main_tsv.dir/src/main_tsv.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_tsv.dir/src/main_tsv.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /scratch/users/md724/igraph_project/src/main_tsv.cpp > CMakeFiles/main_tsv.dir/src/main_tsv.cpp.i

CMakeFiles/main_tsv.dir/src/main_tsv.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_tsv.dir/src/main_tsv.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /scratch/users/md724/igraph_project/src/main_tsv.cpp -o CMakeFiles/main_tsv.dir/src/main_tsv.cpp.s

CMakeFiles/main_tsv.dir/src/louvain.cpp.o: CMakeFiles/main_tsv.dir/flags.make
CMakeFiles/main_tsv.dir/src/louvain.cpp.o: /scratch/users/md724/igraph_project/src/louvain.cpp
CMakeFiles/main_tsv.dir/src/louvain.cpp.o: CMakeFiles/main_tsv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main_tsv.dir/src/louvain.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main_tsv.dir/src/louvain.cpp.o -MF CMakeFiles/main_tsv.dir/src/louvain.cpp.o.d -o CMakeFiles/main_tsv.dir/src/louvain.cpp.o -c /scratch/users/md724/igraph_project/src/louvain.cpp

CMakeFiles/main_tsv.dir/src/louvain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_tsv.dir/src/louvain.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /scratch/users/md724/igraph_project/src/louvain.cpp > CMakeFiles/main_tsv.dir/src/louvain.cpp.i

CMakeFiles/main_tsv.dir/src/louvain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_tsv.dir/src/louvain.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /scratch/users/md724/igraph_project/src/louvain.cpp -o CMakeFiles/main_tsv.dir/src/louvain.cpp.s

CMakeFiles/main_tsv.dir/src/graph_reader.cpp.o: CMakeFiles/main_tsv.dir/flags.make
CMakeFiles/main_tsv.dir/src/graph_reader.cpp.o: /scratch/users/md724/igraph_project/src/graph_reader.cpp
CMakeFiles/main_tsv.dir/src/graph_reader.cpp.o: CMakeFiles/main_tsv.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main_tsv.dir/src/graph_reader.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main_tsv.dir/src/graph_reader.cpp.o -MF CMakeFiles/main_tsv.dir/src/graph_reader.cpp.o.d -o CMakeFiles/main_tsv.dir/src/graph_reader.cpp.o -c /scratch/users/md724/igraph_project/src/graph_reader.cpp

CMakeFiles/main_tsv.dir/src/graph_reader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main_tsv.dir/src/graph_reader.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /scratch/users/md724/igraph_project/src/graph_reader.cpp > CMakeFiles/main_tsv.dir/src/graph_reader.cpp.i

CMakeFiles/main_tsv.dir/src/graph_reader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main_tsv.dir/src/graph_reader.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /scratch/users/md724/igraph_project/src/graph_reader.cpp -o CMakeFiles/main_tsv.dir/src/graph_reader.cpp.s

# Object files for target main_tsv
main_tsv_OBJECTS = \
"CMakeFiles/main_tsv.dir/src/main_tsv.cpp.o" \
"CMakeFiles/main_tsv.dir/src/louvain.cpp.o" \
"CMakeFiles/main_tsv.dir/src/graph_reader.cpp.o"

# External object files for target main_tsv
main_tsv_EXTERNAL_OBJECTS =

main_tsv: CMakeFiles/main_tsv.dir/src/main_tsv.cpp.o
main_tsv: CMakeFiles/main_tsv.dir/src/louvain.cpp.o
main_tsv: CMakeFiles/main_tsv.dir/src/graph_reader.cpp.o
main_tsv: CMakeFiles/main_tsv.dir/build.make
main_tsv: igraph_build/src/libigraph.a
main_tsv: /usr/lib64/libm.so
main_tsv: /usr/lib64/libgmp.so
main_tsv: /usr/lib64/libxml2.so
main_tsv: /usr/lib/gcc/x86_64-redhat-linux/8/libgomp.so
main_tsv: /usr/lib64/libpthread.so
main_tsv: CMakeFiles/main_tsv.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable main_tsv"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main_tsv.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main_tsv.dir/build: main_tsv
.PHONY : CMakeFiles/main_tsv.dir/build

CMakeFiles/main_tsv.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main_tsv.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main_tsv.dir/clean

CMakeFiles/main_tsv.dir/depend:
	cd /scratch/users/md724/igraph_project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /scratch/users/md724/igraph_project /scratch/users/md724/igraph_project /scratch/users/md724/igraph_project/build /scratch/users/md724/igraph_project/build /scratch/users/md724/igraph_project/build/CMakeFiles/main_tsv.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main_tsv.dir/depend

