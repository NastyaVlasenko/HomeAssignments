all: project

project: main.o reverse_polish.o calc.o
	g++ main.o reverse_polish.o calc.o -o project

main.o: main.cpp assig2b.h
	g++ -c main.cpp -o main.o

reverse_polish.o: rev_polish.cpp assig2b.h
	g++ -c  rev_polish.cpp -o reverse_polish.o

calc.o: calc.cpp assig2b.h
	g++ -c calc.cpp -o calc.o
clean:
	rm -rf *.o
