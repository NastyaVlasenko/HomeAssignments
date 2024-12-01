all: project

project: main.o transformers.o composition.o avtobot.o decepticon.o dinobot.o
	g++ main.o transformers.o composition.o avtobot.o decepticon.o dinobot.o -o project

transformers.o: transformers.cpp transformers.h
	g++ -c transformers.cpp -o transformers.o

main.o: main.cpp assig3.h
	g++ -c main.cpp -o main.o

composition.o: composition.cpp composition.h
	g++ -c composition.cpp -o composition.o

avtobot.o: avtobot.cpp avtobot.h
	g++ -c avtobot.cpp -o avtobot.o

decepticon.o: decepticon.cpp decepticon.h
	g++ -c decepticon.cpp -o decepticon.o

dinobot.o: dinobot.cpp dinobot.h
	g++ -c dino.cpp -o dinobot.o

transformers_test.o: transformers_test.cpp transformers.h composition.h avtobot.h decepticon.h dinobot.h
	g++ -c transformers_test.cpp -o transformers_test.o

clean:
	rm -rf *.o
