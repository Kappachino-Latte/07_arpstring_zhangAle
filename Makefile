all: main.o
	gcc -o arpstring main.o
	
main.o: main.c
	gcc -c main.c
	
run:
	./arpstring
	
clear:
	rm *.o
