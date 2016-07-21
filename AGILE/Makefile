CC=g++
.PHONY: all
CFLAGS=-c -Wall -I/home/master/googletest/googletest/include
LDFLAGS=-L/home/master/googletest/googlemock/gtest -lgtest -lpthread
HEADERS=complex.h
SOURCES=complex.cpp test.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=test
all: $(OBJECTS) $(EXECUTABLE)
# Шаг (цель) компоновщика
.cpp.o:
	$(CC) $(CFLAGS) $< -o $@
clean:
	rm -rf *.o $(EXECUTABLE)
# Шаг линковщика
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(OBJECTS) -o $(EXECUTABLE) $(LDFLAGS)
install:
	install $(EXECUTABLE) /usr/share
uninstall:
	rm /usr/share/$(EXECUTABLE)
