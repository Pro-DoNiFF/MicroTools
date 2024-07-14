# CMakeList.txt : CMake project for MicroTools, include source and define
# project specific logic here.

set(CPP_FILES MicroTools.cpp)

# Add source to this project's executable.
add_executable (MicroTools "MicroTools.cpp"  "Networking/Client.h" "Networking/Client.cpp" "System/Array.h" "System/Array.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET MicroTools PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
