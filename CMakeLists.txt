cmake_minimum_required(VERSION 3.5)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(PROJECT_NAME Calculatorcpp)
project(${PROJECT_NAME})

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


add_library(project1_lib src/addition.cpp 
src/division.cpp 
src/multiplication.cpp
src/subtraction.cpp)

add_executable(app main.cpp)
                # src/addition.cpp 
                # src/division.cpp 
                # src/multiplication.cpp
                # src/subtraction.cpp)
target_include_directories(app PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_link_libraries(app project1_lib)


# file (GLOB_RECURSE SRC_FILES "src/*.cpp")
# add_executable(app main.cpp ${SRC_FILES})
# #globbing is not recommended https://stackoverflow.com/questions/1027247/is-it-better-to-specify-source-files-with-glob-or-each-file-individually-in-cmak/1060061#1060061


# include_directories(src)

# add_subdirectory(src)
# add_subdirectory(tst)
# add_subdirectory(lib/googletest)
