main: main.o Book.o
	g++ Book.o main.o -o main
main.o: main.cpp
	g++ -c main.cpp
Book.o: Book.cpp Book.h
	g++ -c Book.cpp

run:
	./main
clean:
	*.o main