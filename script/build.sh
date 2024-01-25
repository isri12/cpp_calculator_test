#!/bin/bash



cd ..
echo "-- Work dir: $PWD"
# echo "####removing build####"
# rm -r build 
# echo "####making build####"
# mkdir build
echo "####cd build####"
cd build
echo "-- build dir: $PWD"
echo "####cmake ..####"
cmake .. -DINSTALL_GTEST=OFF
echo "####cmake --build .####"
cmake --build .
echo "####make####"
make
# echo "####Cmake install####"
# cmake --install .  --config Release
echo "-- Build dir: $PWD"
echo "-- Test dir: $PWD/tests"

#run script
#cmake -E  ./../script/build.sh && ./../build/tests/calc_test_app