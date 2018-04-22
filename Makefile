CXX=gcc
CFLAGS= $(CXX) -c -Wall -Werror
OBJECTS = build/menu.o build/print.o build/mass.o build/prow.o
.PHONY: all clean

all: bin build bin/tag

bin/tag: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/tag

build/menu.o: src/menu.c src/functions.h
	$(CFLAGS) src/menu.c -o build/menu.o

build/print.o: src/print.c src/functions.h
	$(CFLAGS) src/print.c -o build/print.o

build/mass.o: src/mass.c src/functions.h
	$(CFLAGS) src/mass.c -o build/mass.o

build/prow.o: src/prow.c src/functions.h
	$(CFLAGS) src/prow.c -o build/prow.o
bin:
	mkdir bin
build:
	mkdir build

clean:
	-rm -rf build/*.o bin/*
	
