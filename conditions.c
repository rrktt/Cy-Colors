void conditions2(int* a,int*b, int i, int j,int bp, int ap){
  printf("\n%d %d\n",i,j);
  
  while(*b == j && *a== i){
          printf("\nVous ne pouvez pas rester immobile!!!\n");
          scanf("%d %d",a,b);
          conditions2(a, b, i, j,bp,ap);
        }
        while(*a<0 || *b<0 || *a>7 || *b>7){//Vérifie si le pion ne sort pas des limites du plateau
      printf("\n Vous ne pouvez pas sortir du plateau !!!");
      scanf("%d %d",a,b);
      conditions2(a, b, i, j,bp,ap);
    }
      while((i-*(a))<0){//Vérifie si le pion avance bien vers l'avant
        printf("\n vous ne pouvez seulement aveancer vers l'avant!!!\n");
        scanf("%d %d",a,b);
         conditions2(a, b, i, j,bp,ap);
      }
      if(*a== i || *b ==j){
      }
      else{
        while(((*(a)-i)/(*(b)-j)!=1)&&((*(a)-i)/(*(b)-j)!=-1)){//Utilisation du coefficient directeur pour savoir si le pion avance bien en diagonale
          printf("\n Vous ne pouvez pas vous déplacer comme ceci!!!\n");
          scanf("%d %d",a,b);
          conditions2(a, b, i, j,bp,ap);
        }
      }
}
void conditions1(int* f,int*g, int i, int j ){
  printf("\n%d %d\n",i,j);
  while(*g == j && *f== i){
          printf("\nVous ne pouvez pas rester immobile!!!\n");
          scanf("%d %d",f,g);
          conditions1(f,g,i,j );
        }
   while(*f<0 || *g<0 || *f>7 || *g>7){//Vérifie si le pion ne sort pas des limites du plateau
      printf("\n Vous ne pouvez pas sortir du plateau !!!");
     scanf("%d %d",f,g);
      conditions1(f,g,i,j );
    }
      while((*(f)-i)<0){//Vérifie si le pion avance bien vers l'avant
        printf("\n vous ne pouvez seulement aveancer vers l'avant!!!\n");
        scanf("%d %d",f,g);
        conditions1(f,g,i,j );
      }
      if(*f== i || *g ==j){
      }
  else{
        while(((*(g)-j)/(*(f)-i)!=1)&&((*(g)-j)/(*(f)-i)!=-1)){//Utilisation du coefficient directeur pour savoir si le pion avance bien en diagonale
          printf("\n Vous ne pouvez pas vous déplacer comme ceci!!!\n");
          scanf("%d %d",f,g);
          conditions1(f,g,i,j );
        }
      }
}

