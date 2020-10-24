all: variables.o 
	gcc -o variables variables.c

variables.o: variables.c
	gcc -c variables.c

run: variables
	./variables


