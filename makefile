program: main.o print.o
	gcc main.o print.o -o program
main.o: main.c
	gcc -c main.c
print.o: print.c
	gcc -c print.c
