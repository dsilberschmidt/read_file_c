# makefile para programa read_file

read_file : read_file.o
	gcc -o read_file read_file.o

read_file.o: read_file.c
	gcc -c  read_file.c 

clean: 
	rm   read_file.o



