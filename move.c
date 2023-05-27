#include"move.h"
//#include"prere.h"
#include<stdio.h>

void move_total(int *a1, int* a2, Pion colors[ROWS][ROWS]){
int a,b,f,g, b2;
  int score1=0,score2=0,manche = 0;
int v=1,ap,bp,fp,gp, ver, ver1, block, block1, obs,obs1, fin;
  

}while(ver!=0);
  for(int i=0; i<ROWS; i++){
    for(int j=0; j<ROWS; j++){
    if(colors[i][j].background==colors[*a1][*a2].background && colors[i][j].p<16 && colors[i][j].p>7){
      obs=check_obstacles(i, j, *a, *b,  colors);
      block=bloque1(&i,&j,  colors);
        do{
    printf("\nTour du joueur 2\nentrer les nouvelles coordonnées de (%d %d) \n", i, j);
  ver=scanf("%d %d", &a, &b); 
          choisirPion(&i, &j, &a, &b, Pion colors[ROWS][ROWS]);
      if(obs=0);/*(colors[i-1][j-1].p != 16) && (colors[i][j-1].p !=16) && (colors[i+1][j-1].p != 16)*/){
        printf("\n Vous ne pouvez pas vous déplacer\n");
        b= bp; a=ap;
      }
      else {
        conditions2(&a,&b,i,j);
      }
      /*if(a==0){
        printf("\nLe joueur 2 à remporter la manche\n");
        score2++;
        manche=1;*/
      }
      colors[a][b].p=colors[i][j].p;
     colors[i][j].p=16;
  affiche(colors);
    } 
    }
    *a1=a; *a2=b;
    ap = a; bp =b;
  
  for(int i=0; i<ROWS; i++){
    for(int j=0; j<ROWS; j++){
    if(colors[i][j].background==colors[*a1][*a2].background && colors[i][j].p<8 && colors[i][j].p>=0){
        do{
        printf("\nTout du joueur 1\nentrer les nouvelles coordonnées de (%d %d) \n", i, j);
  scanf("%d %d", &f, &g);
     ver1= vide_buffer();
    }while(ver1!=2 );
         block1=bloquer(&i, &j, colors);
          obs=check_obstacles(i, j, *f, *g,  colors);
      choisirPion(&i, &j, &f, &g, Pion colors[ROWS][ROWS]);
       if(obs==0/*(colors[i-1][j+1].p != 16) && (colors[i][j+i].p !=16) && (colors[i+1][j+1].p != 16)*/){
        
        printf("\n Vous ne pouvez pas vous déplacer\n");
      }
      else {
      conditions1(&f,&g,i,j );
      }
      /* if(f==7){
        printf("\nLe joueur 1 à remporter la manche\n");
        score1++;
        manche=1;*/
      colors[f][g].p=colors[i][j].p;
     colors[i][j].p=16;
  affiche(colors);
    }
    }  }
    *a1=f; *a2=g;

}
  
void move0( Pion colors[ROWS][ROWS], int* psp){
 int a, b;
  int x,y,score, score;
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
do{
  move_total(&a, &b, colors);
  
 fin = fin_de_partie(&score, &score1, &block, &block1,psp, colors);
    } while (fin == 3 || fin == 2);
if(fin==3){
  printf("c'est le joueur 2 qui gagne %d", score);
  
}
  if(fin==2){
  printf("c'est le joueur 1 qui gagne %d",score1);
}
}

void move( Pion colors[ROWS][ROWS]){
  int nmb_partie, *pspe, ver=1;
  do{
printf("entrer le nombre de parties\n");
ver=scanf("%d", &nmb_partie);
  vide_buffer();
    }while(ver!=1 || nmb_partie<0);
for(int i=0; i<nmb_partie; i++){
  move0(colors, pspe);
  for(int i=0; i<ROWS; i++){
    for(int j=0; j<ROWS; j++){
      if(colors[i][j].p==*pspe){
  colors[i][j].promoted= true;
        if(*pspe<8 && *pspe>=0){
      colors[i][j].p=17;}
        else{
      colors[i][j].p=18; 
    }
       initialisation(colors);
  affiche(colors);
    }
    }
}
