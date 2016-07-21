CC=g++
#.PHONY: all
all: 
complex.o: complex.cpp complex.h
	g++ -c complex.cpp -o complex.o -I. -I/home/master/googletest/googletest/include
test.o: test.cpp
	g++ -c test.cpp -o test.o -I/home/master/googletest/googletest/include
test: complex.o test.o
	g++ complex.o test.o -o test -L/home/master/googletest/googlemock/gtest -lgtest -lpthread
