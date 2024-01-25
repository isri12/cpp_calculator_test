cmake_minimum_required(VERSION 3.5)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_NAME calculatorcpp)
project(${PROJECT_NAME})
set(PROJECT_EXE calculatorexe)

#set()
add_subdirectory(src)
add_subdirectory(tests)

# Find the FCGI library
find_library(FCGI_LIBRARY fcgi)

#add_subdirectory( ${GOOGLETEST_PROJECT_LOCATION} build)
add_subdirectory(/home/isri12/Documents/code/cplusplus/lib/googletest build)

add_executable(${PROJECT_EXE} main.cpp)

target_include_directories(${PROJECT_EXE} PRIVATE include)  #look for the header files,
#target_link_directories(${PROJECT_NAME} PRIVATE include)  #tell to the linker which libraries you want to link against your executable.

# Link against the local calc_lib
target_link_libraries(${PROJECT_EXE} calc_lib)
# Link against the FCGI library
target_link_libraries(${PROJECT_EXE} ${FCGI_LIBRARY})




#include_directories(include)
#add_subdirectory(calcLib)
#add_subdirectory(src)
#add_subdirectory(tests)
# file(GLOB SOURCES CONFIGURE_DEPENDS "src/*.cpp")
# file(GLOB SOURCES "src/*.cpp")
# file(GLOB HEADER "include/*.h")
#set (LIBS src/addition.cpp src/division.cpp src/multiplication.cpp src/subtraction.cpp)
# set (LIBS src/*.cpp)
# add_library(calcLib LIBS)
# file (GLOB_RECURSE SRC_FILES "src/*.cpp")
# add_executable(app main.cpp ${SRC_FILES})
# #globbing is not recommended https://stackoverflow.com/questions/1027247/is-it-better-to-specify-source-files-with-glob-or-each-file-individually-in-cmak/1060061#1060061
# include_directories(src)
# add_subdirectory(src)
# add_subdirectory(lib/googletest)
