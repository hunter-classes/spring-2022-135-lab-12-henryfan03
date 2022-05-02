main: main.o funcs.o
	g++ -o main main.o funcs.o

funcs.o: funcs.cpp

main.o: main.cpp funcs.h

clean:
	rm -f main main.o funcs.o
