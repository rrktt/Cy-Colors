#include"valcoul.h"

int** valcoul(){
  int** valcoul=NULL;
  valcoul=malloc(sizeof(int*)*8);// tableau conteanant les correspondance ANSI des couleurs d'arrière plan des cases intermédiaires entre la premère ligne et la dernière ligne
   for (int i = 1; i < ROWS-1; i++) {
        valcoul[i] = malloc(8* sizeof(int));
    }
  valcoul[1][0]=45;
  valcoul[1][1]=40;
  valcoul[1][2]=43;
  valcoul[1][3]=46;
  valcoul[1][4]=41;
  valcoul[1][5]=44;
  valcoul[1][6]=47;
  valcoul[1][7]=42;
    valcoul[2][0]=46;
  valcoul[2][1]=43;
  valcoul[2][2]=40;
  valcoul[2][3]=45;
  valcoul[2][4]=42;
  valcoul[2][5]=47;
  valcoul[2][6]=44;
  valcoul[2][7]=41;
    valcoul[3][0]=43;
  valcoul[3][1]=42;
  valcoul[3][2]=41;
  valcoul[3][3]=40;
  valcoul[3][4]=47;
  valcoul[3][5]=46;
  valcoul[3][6]=45;
  valcoul[3][7]=44;
    valcoul[4][0]=44;
  valcoul[4][1]=45;
  valcoul[4][2]=46;
  valcoul[4][3]=47;
  valcoul[4][4]=40;
  valcoul[4][5]=41;
  valcoul[4][6]=42;
  valcoul[4][7]=43;
    valcoul[5][0]=41;
  valcoul[5][1]=44;
  valcoul[5][2]=47;
  valcoul[5][3]=42;
  valcoul[5][4]=45;
  valcoul[5][5]=40;
  valcoul[5][6]=43;
  valcoul[5][7]=46;
    valcoul[6][0]=42;
  valcoul[6][1]=47;
  valcoul[6][2]=44;
  valcoul[6][3]=41;
  valcoul[6][4]=46;
  valcoul[6][5]=43;
  valcoul[6][6]=40;
  valcoul[6][7]=45;
return valcoul;
}
