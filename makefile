all: main
accueil.o: lib.h accueil.h accueil.c
	gcc -c accueil.c -o accueil.o
ini.o: lib.h ini.h ini.c
	gcc -c ini.c -o ini.o
move.o:	lib.h move.h move.o
	gcc -c move.c -o move.o
prere.o : lib.h prere.h prere.c
	gcc -c prere.c -o prere.o
valcoul.c : lib.h valcoul.h valcoul.c
	gcc -c valvoucl.c -o valcoul.o
main.o :
	gcc -c main.c -o main.o
