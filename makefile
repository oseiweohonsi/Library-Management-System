main: Book.cpp main.cpp
	g++ main.cpp Book.cpp -o main
main.o: main.cpp	
	g++ -c main.cpp
Book.o: Book.cpp Book.h
	g++ -c Book.cpp
run: 
	./main
clean:
	rm *.o main