all: main
main.o: lib.h main.c ini.h move.h accueil.h
	gcc -c main.c -o main.o
ini.o: lib.h ini.c ini.h
	gcc -c ini.c -o ini.o 
conditions.o : lib.h conditions.c conditions.h
	gcc -c conditions.c -o conditions.o
move.o: lib.h move.c move.h
	gcc -c move.c -o move.o 
prere.o: lib.h prere.c prere.h
	gcc -c prere.c -o prere.o
valcoul.o: lib.h valcoul.c valcoul.h
	gcc -c valcoul.c -o valcoul.o
acccueil.o: lib.h accueil.c accueil.h
	gcc -c accueil.c -o accueil.o
main: main.o ini.o move.o prere.o valcoul.o accueil.o  conditions.o
	gcc main.o ini.o move.o prere.o valcoul.o accueil.o conditions.o -o main
