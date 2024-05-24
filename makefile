main: main.cpp Book.o
	g++ main.cpp -o main
Book.o: Book.cpp Book.h
	g++ -c Book.cpp
run: 
	./main
clean:
	rm *.o main