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
include igraph_build/vendor/pcg/CMakeFiles/pcg.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include igraph_build/vendor/pcg/CMakeFiles/pcg.dir/compiler_depend.make

# Include the progress variables for this target.
include igraph_build/vendor/pcg/CMakeFiles/pcg.dir/progress.make

# Include the compile flags for this target's objects.
include igraph_build/vendor/pcg/CMakeFiles/pcg.dir/flags.make

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-64.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/flags.make
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-64.c.o: /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-advance-64.c
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-64.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-64.c.o"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-64.c.o -MF CMakeFiles/pcg.dir/pcg-advance-64.c.o.d -o CMakeFiles/pcg.dir/pcg-advance-64.c.o -c /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-advance-64.c

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-64.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pcg.dir/pcg-advance-64.c.i"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-advance-64.c > CMakeFiles/pcg.dir/pcg-advance-64.c.i

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-64.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pcg.dir/pcg-advance-64.c.s"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-advance-64.c -o CMakeFiles/pcg.dir/pcg-advance-64.c.s

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-128.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/flags.make
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-128.c.o: /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-advance-128.c
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-128.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-128.c.o"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-128.c.o -MF CMakeFiles/pcg.dir/pcg-advance-128.c.o.d -o CMakeFiles/pcg.dir/pcg-advance-128.c.o -c /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-advance-128.c

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-128.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pcg.dir/pcg-advance-128.c.i"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-advance-128.c > CMakeFiles/pcg.dir/pcg-advance-128.c.i

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-128.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pcg.dir/pcg-advance-128.c.s"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-advance-128.c -o CMakeFiles/pcg.dir/pcg-advance-128.c.s

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-32.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/flags.make
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-32.c.o: /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-32.c
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-32.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-32.c.o"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-32.c.o -MF CMakeFiles/pcg.dir/pcg-output-32.c.o.d -o CMakeFiles/pcg.dir/pcg-output-32.c.o -c /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-32.c

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-32.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pcg.dir/pcg-output-32.c.i"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-32.c > CMakeFiles/pcg.dir/pcg-output-32.c.i

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-32.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pcg.dir/pcg-output-32.c.s"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-32.c -o CMakeFiles/pcg.dir/pcg-output-32.c.s

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-64.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/flags.make
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-64.c.o: /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-64.c
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-64.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-64.c.o"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-64.c.o -MF CMakeFiles/pcg.dir/pcg-output-64.c.o.d -o CMakeFiles/pcg.dir/pcg-output-64.c.o -c /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-64.c

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-64.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pcg.dir/pcg-output-64.c.i"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-64.c > CMakeFiles/pcg.dir/pcg-output-64.c.i

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-64.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pcg.dir/pcg-output-64.c.s"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-64.c -o CMakeFiles/pcg.dir/pcg-output-64.c.s

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-128.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/flags.make
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-128.c.o: /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-128.c
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-128.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-128.c.o"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-128.c.o -MF CMakeFiles/pcg.dir/pcg-output-128.c.o.d -o CMakeFiles/pcg.dir/pcg-output-128.c.o -c /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-128.c

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-128.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pcg.dir/pcg-output-128.c.i"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-128.c > CMakeFiles/pcg.dir/pcg-output-128.c.i

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-128.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pcg.dir/pcg-output-128.c.s"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-output-128.c -o CMakeFiles/pcg.dir/pcg-output-128.c.s

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-64.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/flags.make
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-64.c.o: /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-rngs-64.c
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-64.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-64.c.o"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-64.c.o -MF CMakeFiles/pcg.dir/pcg-rngs-64.c.o.d -o CMakeFiles/pcg.dir/pcg-rngs-64.c.o -c /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-rngs-64.c

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-64.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pcg.dir/pcg-rngs-64.c.i"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-rngs-64.c > CMakeFiles/pcg.dir/pcg-rngs-64.c.i

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-64.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pcg.dir/pcg-rngs-64.c.s"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-rngs-64.c -o CMakeFiles/pcg.dir/pcg-rngs-64.c.s

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-128.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/flags.make
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-128.c.o: /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-rngs-128.c
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-128.c.o: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/scratch/users/md724/igraph_project/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-128.c.o"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-128.c.o -MF CMakeFiles/pcg.dir/pcg-rngs-128.c.o.d -o CMakeFiles/pcg.dir/pcg-rngs-128.c.o -c /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-rngs-128.c

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-128.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pcg.dir/pcg-rngs-128.c.i"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-rngs-128.c > CMakeFiles/pcg.dir/pcg-rngs-128.c.i

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-128.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pcg.dir/pcg-rngs-128.c.s"
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg/pcg-rngs-128.c -o CMakeFiles/pcg.dir/pcg-rngs-128.c.s

pcg: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-64.c.o
pcg: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-advance-128.c.o
pcg: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-32.c.o
pcg: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-64.c.o
pcg: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-output-128.c.o
pcg: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-64.c.o
pcg: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/pcg-rngs-128.c.o
pcg: igraph_build/vendor/pcg/CMakeFiles/pcg.dir/build.make
.PHONY : pcg

# Rule to build all files generated by this target.
igraph_build/vendor/pcg/CMakeFiles/pcg.dir/build: pcg
.PHONY : igraph_build/vendor/pcg/CMakeFiles/pcg.dir/build

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/clean:
	cd /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg && $(CMAKE_COMMAND) -P CMakeFiles/pcg.dir/cmake_clean.cmake
.PHONY : igraph_build/vendor/pcg/CMakeFiles/pcg.dir/clean

igraph_build/vendor/pcg/CMakeFiles/pcg.dir/depend:
	cd /scratch/users/md724/igraph_project/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /scratch/users/md724/igraph_project /scratch/users/md724/igraph_project/external_libs/igraph/vendor/pcg /scratch/users/md724/igraph_project/build /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg /scratch/users/md724/igraph_project/build/igraph_build/vendor/pcg/CMakeFiles/pcg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : igraph_build/vendor/pcg/CMakeFiles/pcg.dir/depend

