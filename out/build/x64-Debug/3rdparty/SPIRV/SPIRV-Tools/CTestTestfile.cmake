# CMake generated Testfile for 
# Source directory: G:/Source/Repos/rpcs3/3rdparty/SPIRV/SPIRV-Tools
# Build directory: G:/Source/Repos/rpcs3/out/build/x64-Debug/3rdparty/SPIRV/SPIRV-Tools
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(spirv-tools-copyrights "C:/Users/Administrator/AppData/Local/Programs/Python/Python311/python.exe" "utils/check_copyright.py")
set_tests_properties(spirv-tools-copyrights PROPERTIES  WORKING_DIRECTORY "G:/Source/Repos/rpcs3/3rdparty/SPIRV/SPIRV-Tools" _BACKTRACE_TRIPLES "G:/Source/Repos/rpcs3/3rdparty/SPIRV/SPIRV-Tools/CMakeLists.txt;357;add_test;G:/Source/Repos/rpcs3/3rdparty/SPIRV/SPIRV-Tools/CMakeLists.txt;0;")
subdirs("external")
subdirs("source")
subdirs("tools")
subdirs("test")
subdirs("examples")
