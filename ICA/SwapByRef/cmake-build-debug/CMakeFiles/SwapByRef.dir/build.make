# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = C:\Users\daiho\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\daiho\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\User Files\Documents\GitHub\CSS342\SwapByRef"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\User Files\Documents\GitHub\CSS342\SwapByRef\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\SwapByRef.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\SwapByRef.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\SwapByRef.dir\flags.make

CMakeFiles\SwapByRef.dir\main.cpp.obj: CMakeFiles\SwapByRef.dir\flags.make
CMakeFiles\SwapByRef.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\User Files\Documents\GitHub\CSS342\SwapByRef\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SwapByRef.dir/main.cpp.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\SwapByRef.dir\main.cpp.obj /FdCMakeFiles\SwapByRef.dir\ /FS -c "D:\User Files\Documents\GitHub\CSS342\SwapByRef\main.cpp"
<<

CMakeFiles\SwapByRef.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SwapByRef.dir/main.cpp.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\cl.exe > CMakeFiles\SwapByRef.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\User Files\Documents\GitHub\CSS342\SwapByRef\main.cpp"
<<

CMakeFiles\SwapByRef.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SwapByRef.dir/main.cpp.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\SwapByRef.dir\main.cpp.s /c "D:\User Files\Documents\GitHub\CSS342\SwapByRef\main.cpp"
<<

# Object files for target SwapByRef
SwapByRef_OBJECTS = \
"CMakeFiles\SwapByRef.dir\main.cpp.obj"

# External object files for target SwapByRef
SwapByRef_EXTERNAL_OBJECTS =

SwapByRef.exe: CMakeFiles\SwapByRef.dir\main.cpp.obj
SwapByRef.exe: CMakeFiles\SwapByRef.dir\build.make
SwapByRef.exe: CMakeFiles\SwapByRef.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\User Files\Documents\GitHub\CSS342\SwapByRef\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable SwapByRef.exe"
	C:\Users\daiho\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\201.7846.88\bin\cmake\win\bin\cmake.exe -E vs_link_exe --intdir=CMakeFiles\SwapByRef.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\1422~1.279\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\SwapByRef.dir\objects1.rsp @<<
 /out:SwapByRef.exe /implib:SwapByRef.lib /pdb:"D:\User Files\Documents\GitHub\CSS342\SwapByRef\cmake-build-debug\SwapByRef.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\SwapByRef.dir\build: SwapByRef.exe

.PHONY : CMakeFiles\SwapByRef.dir\build

CMakeFiles\SwapByRef.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\SwapByRef.dir\cmake_clean.cmake
.PHONY : CMakeFiles\SwapByRef.dir\clean

CMakeFiles\SwapByRef.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "D:\User Files\Documents\GitHub\CSS342\SwapByRef" "D:\User Files\Documents\GitHub\CSS342\SwapByRef" "D:\User Files\Documents\GitHub\CSS342\SwapByRef\cmake-build-debug" "D:\User Files\Documents\GitHub\CSS342\SwapByRef\cmake-build-debug" "D:\User Files\Documents\GitHub\CSS342\SwapByRef\cmake-build-debug\CMakeFiles\SwapByRef.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\SwapByRef.dir\depend
