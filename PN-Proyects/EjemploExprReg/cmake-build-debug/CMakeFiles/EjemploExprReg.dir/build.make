# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.1.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.1.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/EjemploExprReg.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/EjemploExprReg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/EjemploExprReg.dir/flags.make

CMakeFiles/EjemploExprReg.dir/main.cpp.obj: CMakeFiles/EjemploExprReg.dir/flags.make
CMakeFiles/EjemploExprReg.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/EjemploExprReg.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\EjemploExprReg.dir\main.cpp.obj -c "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg\main.cpp"

CMakeFiles/EjemploExprReg.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/EjemploExprReg.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg\main.cpp" > CMakeFiles\EjemploExprReg.dir\main.cpp.i

CMakeFiles/EjemploExprReg.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/EjemploExprReg.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg\main.cpp" -o CMakeFiles\EjemploExprReg.dir\main.cpp.s

CMakeFiles/EjemploExprReg.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/EjemploExprReg.dir/main.cpp.obj.requires

CMakeFiles/EjemploExprReg.dir/main.cpp.obj.provides: CMakeFiles/EjemploExprReg.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\EjemploExprReg.dir\build.make CMakeFiles/EjemploExprReg.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/EjemploExprReg.dir/main.cpp.obj.provides

CMakeFiles/EjemploExprReg.dir/main.cpp.obj.provides.build: CMakeFiles/EjemploExprReg.dir/main.cpp.obj


# Object files for target EjemploExprReg
EjemploExprReg_OBJECTS = \
"CMakeFiles/EjemploExprReg.dir/main.cpp.obj"

# External object files for target EjemploExprReg
EjemploExprReg_EXTERNAL_OBJECTS =

EjemploExprReg.exe: CMakeFiles/EjemploExprReg.dir/main.cpp.obj
EjemploExprReg.exe: CMakeFiles/EjemploExprReg.dir/build.make
EjemploExprReg.exe: CMakeFiles/EjemploExprReg.dir/linklibs.rsp
EjemploExprReg.exe: CMakeFiles/EjemploExprReg.dir/objects1.rsp
EjemploExprReg.exe: CMakeFiles/EjemploExprReg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable EjemploExprReg.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\EjemploExprReg.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/EjemploExprReg.dir/build: EjemploExprReg.exe

.PHONY : CMakeFiles/EjemploExprReg.dir/build

CMakeFiles/EjemploExprReg.dir/requires: CMakeFiles/EjemploExprReg.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/EjemploExprReg.dir/requires

CMakeFiles/EjemploExprReg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\EjemploExprReg.dir\cmake_clean.cmake
.PHONY : CMakeFiles/EjemploExprReg.dir/clean

CMakeFiles/EjemploExprReg.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg" "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg" "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg\cmake-build-debug" "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg\cmake-build-debug" "C:\Users\angel\Documents\Programacion Estructurada\Proyects\EjemploExprReg\cmake-build-debug\CMakeFiles\EjemploExprReg.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/EjemploExprReg.dir/depend
