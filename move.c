#include"move.h"
//#include"prere.h"
#include<stdio.h>
void vide_buffer(){
  while(getchar()!='\n'){}
}
void move(Pion colors[ROWS][ROWS]){
  int x, y, a, b, verif, verif0;
  
do{
  
  do{
      printf("\nentrer les coordonnées du pion à déplacer : \n");
    verif=scanf("%d %d", &x, &y);
    vide_buffer();
  printf("entrer les nouvelles coordonnées :\n ");
    verif0=scanf("%d %d", &a, &b);
    vide_buffer();
    printf( "\033[0;0H\033[2J");// permet d'effacer le contenu du terminal¿
      colors[a][b].p=colors[x][y].p;// remplace la valeur de la deuxième case sélèctionner par celle de la première 
     colors[x][y].p=16;//remplace la valeur de la première case par un vide
  affiche(colors);
    }while( x<0 || x>=8 || y<0 || y>=8 || colors[x][y].p==16 );//incomplet 
}
while(colors[a][b].p>16 && colors[a][b].p<=8 || colors[a][b].p>8 && colors[a][b].p<0);//incomplet boucle infinie
}
