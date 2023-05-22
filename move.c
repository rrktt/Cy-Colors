#include"move.h"
//#include"prere.h"
#include<stdio.h>

void move_total(int *a1, int* a2, Pion colors[ROWS][ROWS]){
int a,b,f,g, b2;
int v=1;
  do{

    printf("\nentrer les nouvelles coordonnées \n");
  scanf("%d %d", &a, &b);
  for(int i=0; i<ROWS; i++){
    for(int j=0; j<ROWS; j++){
    if(colors[i][j].background==colors[*a1][*a2].background && colors[i][j].p<16 && colors[i][j].p>7){
      colors[a][b].p=colors[i][j].p;
     colors[i][j].p=16;
  affiche(colors);
    } 
    }
  }*a1=a; *a2=b;
    /*    printf("\nentrer les nouvelles coordonnées \n");
  scanf("%d %d", &f, &g);
  for(int i=0; i<ROWS; i++){
    for(int j=0; j<ROWS; j++){
    if(colors[i][j].background==colors[*a1][*a2].background && colors[i][j].p<8 && colors[i][j].p>=0){
      colors[f][g].p=colors[i][j].p;
     colors[i][j].p=16;
  affiche(colors);
    }
    }  }
    *a1=f; *a2=g*/
  }
while(1/*colors[a][b].p>16 && colors[a][b].p<=8 || colors[a][b].p>8 && colors[a][b].p<0*/);
}
  
void move( Pion colors[ROWS][ROWS]){
 int a, b;
  int x,y;
  printf("\nentrer les coordonnées du       pion à déplacer : \n");
    scanf("%d %d", &x, &y);
    
  printf("entrer les nouvelles coordonnées ");
  scanf("%d %d", &a, &b);
  
    printf( "\033[0;0H\033[2J");
      colors[a][b].p=colors[x][y].p;
     colors[x][y].p=16;
  affiche(colors);

  move_total(&a, &b, colors);


}


