OBJECTS=OList.o List.o main.o Node.o tests.o
CXXFLAGS=-g

main: $(OBJECTS)
	g++ -g -o main $(OBJECTS)

tests: tests.o Node.o OList.o
	g++ -o tests tests.o Node.o OList.o

tests.o: tests.cpp doctest.h Node.h OList.h
	g++ -c -std=c++11 tests.cpp

OList.o: OList.cpp Node.h OList.h

List.o: List.cpp Node.h List.h

main.o: main.cpp OList.h List.h Node.h

Node.o: Node.cpp Node.h

clean:
	rm -f $(OBJECTS)
