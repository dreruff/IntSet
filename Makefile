# simple makefile

# define target, its dependencies and files
p3: main.o IntSet.o
	g++ -o p3 main.o IntSet.o

# define how each object file is to be built
main.o: main.cpp IntSet.h
	g++ -c main.cpp

IntSet.o: IntSet.cpp IntSet.h
	g++ -c IntSet.cpp

# clean up
clean:
	rm -f p3 *.o *~
