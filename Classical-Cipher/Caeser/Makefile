main:main.o encode.o crack.o
	gcc -o CaeserCracker main.o encode.o crack.o
main.o:main.c caeser.h
	gcc -c main.c
encode.o:encode.c caeser.h
	gcc -c encode.c
crack.o:crack.c caeser.h
	gcc -c crack.c
clean:
	rm *.o
