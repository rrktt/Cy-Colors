#include"move.h"
//#include"prere.h"
#include<stdio.h>
void move(Pion colors[ROWS][ROWS]){
  int x, y, a, b;
  
do{
  
  do{
      printf("\nentrer les coordonnées du       pion à déplacer : \n");
    scanf("%d %d", &x, &y);
    
  printf("entrer les nouvelles coordonnées ");
  scanf("%d %d", &a, &b);
  
    printf( "\033[0;0H\033[2J");
      colors[a][b].p=colors[x][y].p;
     colors[x][y].p=16;
  affiche(colors);
    }while( x<0 || x>=8 || y<0 || y>=8 || colors[x][y].p==16 );
}
while(colors[a][b].p>16 && colors[a][b].p<=8 || colors[a][b].p>8 && colors[a][b].p<0);
}
