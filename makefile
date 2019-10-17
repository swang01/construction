all: main.o fundef.o
	gcc -o program main.o fundef.o

main.o: main.c header.h
	gcc -c main.c

fundef.o: fundef.c header.h
	gcc -c fundef.c

run:
	./program

clean:
	rm *.o
	rm *~
