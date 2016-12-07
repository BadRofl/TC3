CC = gcc
CFLAGS = -g -Wall -DDEBUG

all: main

main: main.o mediane.o 
	$(CC) $(CFLAGS)  main.o mediane.o -o main

mediane.o : mediane.c mediane.h  
	$(CC) $(CFLAGS) -c mediane.c -o mediane.o

main.o : main.c
	$(CC) $(CFLAGS) -c main.c -o main.o

clean: 
	\rm -rf *.o

