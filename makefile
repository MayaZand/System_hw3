all: txtfind isort

main_a.o: main_a.c isort.h
	gcc -c main_a.c

main_b.o: main_b.c txtfind.h
	gcc -c main_b.c

isort.o: isort.c isort.h
	gcc -c isort.c

txtfind.o: txtfind.c txtfind.h
	gcc -c txtfind.c

isort: main_a.o isort.o
	gcc main_a.o isort.o -o isort

txtfind: main_b.o txtfind.o
	gcc main_b.o txtfind.o -o txtfind

clean: 
	rm *.o txtfind isort *.txt

