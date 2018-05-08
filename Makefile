CXX=gcc
CFLAGS= $(CXX) -c -Wall -Werror
OBJECTS = build/menu.o build/print.o build/mass.o build/prow.o build/move.o build/win.o

OB = build/tag_test.o build/print.o build/mass.o build/prow.o build/move.o build/win.o

.PHONY: all clean

all: bin build default test

default: bin/tag

test: bin/tag_test
	bin/tag_test

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

build/move.o: src/move.c src/functions.h
	$(CFLAGS) src/move.c -o build/move.o

build/win.o: src/win.c src/functions.h
	$(CFLAGS) src/win.c -o build/win.o



bin/tag_test: $(OB)
	$(CXX) $(OB) -o bin/tag_test

build/tag_test.o: test/main.c thirdparty/ctest.h src/functions.h
	$(CFLAGS) -I thirdparty -I src -c test/main.c -o build/tag_test.o



bin:
	mkdir bin
build:
	mkdir build

clean:
	-rm -rf build/*.o bin/*
	
