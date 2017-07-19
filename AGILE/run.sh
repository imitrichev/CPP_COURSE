#!/bin/bash
g++ complex.cpp test.cpp -I/home/master/googletest/googletest/include -L/home/master/googletest/googlemock/gtest/ -lgtest -lpthread -o test
./test
if [[ $? -eq 0 ]]
then
echo "OK"
else
echo "DOES NOT COMPILE"
fi
