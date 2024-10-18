all: hello

hello: main.o hello.o
	g++ main.o hello.o -o hello

main.o: main.cpp hello.h
	g++ -c main.cpp -o main.o

hello.o: hello.cpp hello.h
	g++ -c hello.cpp -o hello.o

clean:
	rm -rf *.o makefile
