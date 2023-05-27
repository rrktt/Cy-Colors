#include"conditions.h"
void conditions2(int* a,int*b, int i, int j){
  int verif;
  printf("\n%d %d\n",i,j);
  
  while(*b == j && *a== i){
          printf("\nVous ne pouvez pas rester immobile!!!\n");
         do{
           verif=scanf("%d %d",a,b);
     vide_buffer();
    }while(verif!=2);
          conditions2(a, b, i, j);
        }
        while(*a<0 || *b<0 || *a>7 || *b>7){//Vérifie si le pion ne sort pas des limites du plateau
      printf("\n Vous ne pouvez pas sortir du plateau !!!");
      do{
        verif=scanf("%d %d",a,b);
           vide_buffer();
    }while(verif!=2);
      conditions2(a, b, i, j);
    }
      while((i-*(a))<0){//Vérifie si le pion avance bien vers l'avant
        printf("\n vous ne pouvez seulement aveancer vers l'avant!!!\n");
        do{
          verif=scanf("%d %d",a,b);
  vide_buffer();
    }while(verif!=2);       
         conditions2(a, b, i, j);
      }
      if(*a== i || *b ==j){
      }
      else{
        while(((*(a)-i)/(*(b)-j)!=1)&&((*(a)-i)/(*(b)-j)!=-1)){//Utilisation du coefficient directeur pour savoir si le pion avance bien en diagonale
          printf("\n Vous ne pouvez pas vous déplacer comme ceci!!!\n");
         do{ 
           verif=scanf("%d %d",a,b);
           vide_buffer();
    }while(verif!=2);
          conditions2(a, b, i, j);
        }
      }
}
void conditions1(int* f,int*g, int i, int j ){
  int verif;
  printf("\n%d %d\n",i,j);
  while(*g == j && *f== i){
          printf("\nVous ne pouvez pas rester immobile!!!\n");
    do{
          verif=scanf("%d %d",f,g);
      vide_buffer();
    }while(verif!=2);
          conditions1(f,g,i,j );
        }
   while(*f<0 || *g<0 || *f>7 || *g>7){//Vérifie si le pion ne sort pas des limites du plateau
      printf("\n Vous ne pouvez pas sortir du plateau !!!");
     do{
       verif=scanf("%d %d",f,g);
      vide_buffer();
    }while(verif!=2);
      conditions1(f,g,i,j );
    }
      while((*(f)-i)<0){//Vérifie si le pion avance bien vers l'avant
        printf("\n vous ne pouvez seulement aveancer vers l'avant!!!\n");
        do{
          verif=scanf("%d %d",f,g);
         vide_buffer();
    }while(verif!=2);
        conditions1(f,g,i,j );
      }
      if(*f== i || *g ==j){
      }
  else{
        while(((*(g)-j)/(*(f)-i)!=1)&&((*(g)-j)/(*(f)-i)!=-1)){//Utilisation du coefficient directeur pour savoir si le pion avance bien en diagonale
          printf("\n Vous ne pouvez pas vous déplacer comme ceci!!!\n");
          do{
            verif=scanf("%d %d",f,g);
           vide_buffer();
    }while(verif!=2);
          conditions1(f,g,i,j );
        }
      }
}

void vide_buffer(){
  while (getchar()!='\n'){}
}

int condition( int r, int h, int m, int g){

for(int i=1;i< 8; i++){

   if((m==r-i && (g==h+i || g==h-i || g==h))||m==r){
     return 1;
     }
    }
   return 0; 

}

int condition1( int r1, int h1, int m1, int g1){

for(int i=1;i< 8; i++){

   if((m1==r1+i && (g1==h1+i || g1==h1-i || g1==h1))||m1==r1){
     return 1;
     }
    }
   return 0; 

}
void choisirPion(int* x, int* y, int*a, int *b, Pion colors[ROWS][ROWS]) {
    int nbPions = 0, ver;
    int indicesPions[8];

    // Parcours des pions sur la case (x, y) et comptage du nombre de pions présents
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < ROWS; j++) {
            if (colors[i][j].background==colors[*x][*y].background && colors[i][j].p<16 && colors[i][j].p>7 ) {
                indicesPions[nbPions] = i;
                nbPions++;
            }
        }
    }

    // Vérification du nombre de pions présents
    if (nbPions > 1) {
        // Affichage des pions disponibles pour sélection
        printf("Pions disponibles sur la case (%d, %d):\n", *x, *y);

printf("que choisissez vous?");
       ver=scanf("%d %d", a, b);
    vide_buffer();
       }while(ver!=2 || *a<0 || *a>7 || *b>7 || *b<0   );

}
int bloquer( int* posx2, int* posy2, Pion color[ROWS][ROWS]){
  if(color[*posx2][*posy2+1].p!=16 && color[*posx2][*posy2-1].p!=16 &&  color[*posx2+1][*posy2].p!=16 && color[*posx2+1][*posy2+1].p!=16 && color[*posx2+1][*posy2-1].p!=16  ){
    return 1;//si un pion de la ligne 7 est entouré de 3 autres pions
  }
  return 0;
}
int bloque1( int* posx, int* posy2, Pion color [ROWS][ROWS]){
  if(color[*posx][*posy2+1].p!=16 && color[*posx][*posy2-1].p!=16 &&  color[*posx-1][*posy2].p!=16 && color[*posx-1][*posy2+1].p!=16 && color[*posx-1][*posy2-1].p!=16  ){
    return 1;//si un pion de la ligne 0 est entouré de 3 autres pions
  }
  return 0;
}
int fin_de_partie(int* score1, int* score2, int *rec, int* rec2, int* psp, Pion color[ROWS][ROWS]) {
  *score1 = 0;
  *score2 = 0;
  
  if (*rec == 1 && *rec2 == 1) {
    return 1;//si les deux joueurs sont bloqués
  }
  
  for (int j = 0; j < 8; j++) {
    if (color[0][j].p < 16 && color[0][j].p > 7) {
      (*score1)++;
      *psp=color[0][j].p;//permet de récupérer le type de pion promue
      return 3; //si un pion de la ligne 7 arrive sur la ligne adverse
    }
    
    if (color[7][j].p < 8 && color[7][j].p >= 0) {
      (*score2)++;
      return 2; //si un pion de la ligne 0 arrive sur la ligne adverse
      *psp=color[0][j].p;//permet de récupérer le type de pion promue
    }
  }
  
  return 0;
}
// Fonction pour vérifier les obstacles en diagonale et perpendiculaires
int check_obstacles(int x1, int y1, int x2, int y2, Pion board[ROWS][ROWS]) {
  // Vérification de la diagonale
    int dx = x2 - x1;
    int dy = y2 - y1;
    int stepX = (dx > 0) ? 1 : -1;
    int stepY = (dy > 0) ? 1 : -1;

    if (dx == 0 || dy == 0 || abs(dx) == abs(dy)) {
        int x = x1 + stepX;
        int y = y1 + stepY;

        while (x != x2 || y != y2) {
            if (board[x][y].p != 16) {
                return 0; // Obstacle trouvé sur la diagonale
            }
            x += stepX;
            y += stepY;
        }
    } 
else{ return 1;}
    // Vérification des côtés
    if (x1 == x2) {
        int y = y1 + stepY;

        while (y != y2) {
            if (board[x1][y].p != 16) {
                return 0; // Obstacle trouvé sur la perpendiculaire
            }
            y += stepY;
        }
    } else if (y1 == y2) {
        int x = x1 + stepX;

        while (x != x2) {
            if (board[x][y1].p != 16) {
                return 0; // Obstacle trouvé sur la perpendiculaire
            }
            x += stepX;
        }
    }
else{
    return 1; }// Aucun obstacle trouvé
}
