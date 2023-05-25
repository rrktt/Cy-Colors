#ifndef STRUCT_H
#define STRUCT_H
#include "lib.h"
typedef struct{
int color ;// utilité non démontré
int background ;
bool promoted ;// true = promue, false = non promue
char type[13];//contient l'élément d'une case
int abs ;// utilité non démontré
int ord ;// utilité non démontré
int p;// indique si une case doit être vide ou doit contenir l' un des deux pions
}Pion;
#endif
