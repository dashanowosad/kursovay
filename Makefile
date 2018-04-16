CXX=g++
CFLAGS= $(CXX) -c -Wall -Werror
OBJECTS = build/menu.o build/print.o
.PHONY: all clean

all: bin/tag

bin/tag: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/tag

build/menu.o: src/menu.cpp src/functions.h
	$(CFLAGS) src/menu.cpp -o build/menu.o

build/print.o: src/print.cpp src/functions.h
	$(CFLAGS) src/print.cpp -o build/print.o

clean:
	-rm -rf build/*.o bin/*
	
