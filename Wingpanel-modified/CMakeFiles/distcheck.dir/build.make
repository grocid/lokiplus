# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/carl/Hämtningar/wingpanel-2.0.1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/carl/Hämtningar/wingpanel-2.0.1

# Utility rule file for distcheck.

# Include the progress variables for this target.
include CMakeFiles/distcheck.dir/progress.make

CMakeFiles/distcheck:
	cd /home/carl/Hämtningar/wingpanel-2.0.1 && rm -rf wingpanel-2.0.1 && tar xf wingpanel-2.0.1.tar.bz2 && mkdir wingpanel-2.0.1/build && cd wingpanel-2.0.1/build && cmake -DCMAKE_INSTALL_PREFIX=../install -DGSETTINGS_LOCALINSTALL=ON .. -DCMAKE_MODULE_PATH=/usr/share/cmake && make -j8 && make -j8 install && make check

distcheck: CMakeFiles/distcheck
distcheck: CMakeFiles/distcheck.dir/build.make

.PHONY : distcheck

# Rule to build all files generated by this target.
CMakeFiles/distcheck.dir/build: distcheck

.PHONY : CMakeFiles/distcheck.dir/build

CMakeFiles/distcheck.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/distcheck.dir/cmake_clean.cmake
.PHONY : CMakeFiles/distcheck.dir/clean

CMakeFiles/distcheck.dir/depend:
	cd /home/carl/Hämtningar/wingpanel-2.0.1 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/carl/Hämtningar/wingpanel-2.0.1 /home/carl/Hämtningar/wingpanel-2.0.1 /home/carl/Hämtningar/wingpanel-2.0.1 /home/carl/Hämtningar/wingpanel-2.0.1 /home/carl/Hämtningar/wingpanel-2.0.1/CMakeFiles/distcheck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/distcheck.dir/depend

