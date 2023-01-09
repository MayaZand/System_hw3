all: txtfind isort

main_a.o: main_a.c isort.h
	gcc -c -Wall -g main_a.c

main_b.o: main_b.c txtfind.h
	gcc -c -Wall -g main_b.c

isort.o: isort.c isort.h
	gcc -c -Wall -g isort.c

txtfind.o: txtfind.c txtfind.h
	gcc -c -Wall -g txtfind.c

isort: main_a.o isort.o
	gcc main_a.o -Wall -g isort.o -o isort

txtfind: main_b.o txtfind.o
	gcc main_b.o -Wall -g txtfind.o -o txtfind

clean: 
	rm *.o txtfind isort *.txt

