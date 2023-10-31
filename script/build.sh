#!/bin/bash

#cd ..
echo "-- Work dir: $PWD"
sleep 3
#echo "####removing build####"
#rm -r build 
#sleep 3
#echo "####making build####"
#mkdir build
#sleep 3
echo "####cd build####"
sleep 2
cd build
sleep 2
echo "####cmake ..####"
cmake ..
sleep 2
# echo "####cmake --build .####"
#cmake --build .
echo "####make####"
make
sleep 2
echo "-- Build dir: $PWD"
echo "-- build test dir: $PWD/tests"