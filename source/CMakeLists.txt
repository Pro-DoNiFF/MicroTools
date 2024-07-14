# CMakeList.txt : CMake project for MicroTools, include source and define
# project specific logic here.

set(CPP_FILES 
"MicroTools.cpp" 
"Networking/Client.cpp" 
"System/JSON.cpp")

set(HEADER_FILES 
"Networking/Client.h" 
"System/Array.h" 
"System/JSON.h")

# Add source to this project's executable.
# add_executable (MicroTools "MicroTools.cpp" "Networking/Client.h" "Networking/Client.cpp" "System/Array.h")
add_executable (${PROJECT_NAME} ${CPP_FILES} ${HEADER_FILES})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
