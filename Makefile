CXX=g++
CFLAGS= $(CXX) -c -Wall -Werror
OBJECTS = build/menu.o build/print.o build/mass.o build/prow.o
.PHONY: all clean

all: bin build bin/tag

bin/tag: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/tag

build/menu.o: src/menu.cpp src/functions.h
	$(CFLAGS) src/menu.cpp -o build/menu.o

build/print.o: src/print.cpp src/functions.h
	$(CFLAGS) src/print.cpp -o build/print.o

build/mass.o: src/mass.cpp src/functions.h
	$(CFLAGS) src/mass.cpp -o build/mass.o

build/prow.o: src/prow.cpp src/functions.h
	$(CFLAGS) src/prow.cpp -o build/prow.o
bin:
	mkdir bin
build:
	mkdir build

clean:
	-rm -rf build/*.o bin/*
	
