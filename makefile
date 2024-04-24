main: Book.o main.o
	g++ main.o Book.o -o main
Book.o: Book.cpp Book.h
	g++ -c Book.cpp
main.cpp: main.o
	g++ -c main.cpp
run: 
	./main
clean:
	rm *.o main