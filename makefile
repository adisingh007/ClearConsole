turboc.o: turboc.c turboc.h
	gcc -c turboc.c

clrscr: turboc.o main.c
	gcc main.c turboc.o -o clrscr

