enable_testing()

# add library
add_library(Testlib 
            hello_test.cpp
            factorialTest.cpp
            StringManipulatorTest.cpp      
)

add_executable( calc_test_app 
                hello_test.cpp 
                factorialTest.cpp
                StringManipulatorTest.cpp
)
target_link_libraries(
    calc_test_app
    GTest::gtest_main
    Testlib
    calc_lib
)

include(GoogleTest)
gtest_discover_tests(calc_test_app)



# # add library
# add_library(proj1lib hello.cpp)
# # Create the executable
# add_executable(app main.cpp)
# target_link_libraries(app proj1lib)