all: main
accueil.o: accueil.h accueil.c
	gcc -c accueil.c -o accueil.o
ini.o: ini.h ini.c
	gcc -c ini.c -o ini.o
move.o:	move.h move.o
	gcc -c move.c -o move.o
prere.o : prere.h prere.c
	gcc -c prere.c -o prere.o
valcoul.c : valcoul.h valcoul.c
	gcc -c valvoucl.c -o valcoul.o
main.o :
	gcc -c main.c -o main.o
