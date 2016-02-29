all: ramya

ramya: joys.o sorting.o
	gcc joys.o sorting.o -o ramya.o

joys.o : joys.c
	gcc -c joys.c

sorting.o : sorting.c
	gcc -c sorting.c
