CXX=gcc
CFLAGS= $(CXX) -c -Wall -Werror
OBJECTS = build/prog/menu.o build/prog/print.o build/prog/mass.o build/prog/prow.o build/prog/move.o build/prog/win.o

OB = build/test/tag_test.o build/prog/print.o build/prog/mass.o build/prog/prow.o build/prog/move.o build/prog/win.o

.PHONY: all clean

all: bin bin/prog bin/test build build/prog build/test default test

default: bin/prog/tag

test: bin/test/tag_test
	bin/test/tag_test

bin/prog/tag: $(OBJECTS)
	$(CXX) $(OBJECTS) -o bin/prog/tag

build/prog/menu.o: src/menu.c src/functions.h
	$(CFLAGS) src/menu.c -o build/prog/menu.o

build/prog/print.o: src/print.c src/functions.h
	$(CFLAGS) src/print.c -o build/prog/print.o

build/prog/mass.o: src/mass.c src/functions.h
	$(CFLAGS) src/mass.c -o build/prog/mass.o

build/prog/prow.o: src/prow.c src/functions.h
	$(CFLAGS) src/prow.c -o build/prog/prow.o

build/prog/move.o: src/move.c src/functions.h
	$(CFLAGS) src/move.c -o build/prog/move.o

build/prog/win.o: src/win.c src/functions.h
	$(CFLAGS) src/win.c -o build/prog/win.o



bin/test/tag_test: $(OB)
	$(CXX) $(OB) -o bin/test/tag_test

build/test/tag_test.o: test/main.c thirdparty/ctest.h src/functions.h
	$(CFLAGS) -I thirdparty -I src -c test/main.c -o build/test/tag_test.o


bin:
	mkdir bin
bin/prog:
	mkdir bin/prog
bin/test:
	mkdir bin/test
build:
	mkdir build
build/prog:
	mkdir build/prog
build/test:
	mkdir build/test

clean:
	-rm -rf build bin
	
