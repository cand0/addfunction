#Makefile
all: add-nbo

add-nbo: add-nbo.o sub-add.o
	g++ -o add-nbo sub-add.o add-nbo.o

add-nbo.o: add.h add-nbo.cpp

sub-add.o: add.h sub-add.cpp

clean:
	rm -f add-nbo
	rm -f *.o
