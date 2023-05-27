#include"move.h"
//#include"prere.h"
#include<stdio.h>

void move_total(int *a1, int* a2, Pion colors[ROWS][ROWS]){
int a,b,f,g, b2;
int v=1,ap,bp,fp,gp;
  do{

    printf("\nTour du joueur 2\nentrer les nouvelles coordonnées \n");
  scanf("%d %d", &a, &b); 
  for(int i=0; i<ROWS; i++){
    for(int j=0; j<ROWS; j++){
    if(colors[i][j].background==colors[*a1][*a2].background && colors[i][j].p<16 && colors[i][j].p>7){
      if((colors[i-1][j-1].p != 16) && (colors[i][j-1].p !=16) && (colors[i+1][j-1].p != 16)){
        printf("\n Vous ne pouvez pas vous déplacer\n");
        b= bp; a=ap;
      }
      else {
        conditions2(&a,&b,i,j);
      }
      colors[a][b].p=colors[i][j].p;
     colors[i][j].p=16;
  affiche(colors);
    } 
    }
    }*a1=a; *a2=b;
    ap = a; bp =b;
        printf("\nTout du joueur 1\nentrer les nouvelles coordonnées \n");
  scanf("%d %d", &f, &g);
  for(int i=0; i<ROWS; i++){
    for(int j=0; j<ROWS; j++){
    if(colors[i][j].background==colors[*a1][*a2].background && colors[i][j].p<8 && colors[i][j].p>=0){
       if((colors[i-1][j+1].p != 16) && (colors[i][j+i].p !=16) && (colors[i+1][j+1].p != 16)){
        printf("\n Vous ne pouvez pas vous déplacer\n");
      }
      else {
      conditions1(&f,&g,i,j );
      }
      colors[f][g].p=colors[i][j].p;
     colors[i][j].p=16;
  affiche(colors);
    }
    }  }
    *a1=f; *a2=g;
  }
while(1/*colors[a][b].p>16 && colors[a][b].p<=8 || colors[a][b].p>8 && colors[a][b].p<0*/);
}
  
void move( Pion colors[ROWS][ROWS]){
 int a, b;
  int x,y;
   printf("\nTour du joueur 1\nentrer les coordonnées du       pion à déplacer : \n");
    scanf("%d %d", &x, &y);
    while(y!=0){
      printf("\nIl n'y a pas de pion ici!!\n");
      scanf("%d %d",&x, &y);
    }
  printf("entrer les nouvelles coordonnées ");
  scanf("%d %d", &a, &b);
  conditions1(&a,&b,x,y );
  
    printf( "\033[0;0H\033[2J");
      colors[a][b].p=colors[x][y].p;
     colors[x][y].p=16;
  affiche(colors);

  move_total(&a, &b, colors);


}

