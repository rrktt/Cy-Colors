#include"prere.h"
//#include "ini.h"

void affiche(Pion colors[ROWS][ROWS]){/*selon la valeur de p chaque case possèdera un élém
   ent  ( de 0-7 les pions de la première ligne, de 8-15 les pions de la dernière ligne, 16 c'est vide, 17 pion promue du haut et 18 pion promue du bas))*/
int val=40;
int val2=47;
   for(int i=0;i<ROWS;i++){
     for(int j=0;j<ROWS;j++){
       switch(colors[i][j].p){
         case(0):
        strcpy(colors[i][j].type, "  🖤  ");
            break;
         case(1):
        strcpy(colors[i][j].type, "  💓  ");
         break;
         case(2): 
        strcpy(colors[i][j].type, "  💚  ");
         break;
          case(3):
        strcpy(colors[i][j].type, "  💛  ");
         break;
          case(4):
        strcpy(colors[i][j].type, "  ♥   ");
         break;
          case(5):
        strcpy(colors[i][j].type, "  💜  ");
         break;
          case(6):
        strcpy(colors[i][j].type, "  💙  ");
         break;
          case(7):
        strcpy(colors[i][j].type, "  🤍  ");
         break;
          case(8):
        strcpy(colors[i][j].type, "  ◻️   ");
         break;
          case(9):
        strcpy(colors[i][j].type, "  🟦  ");
         break;
          case(10):
        strcpy(colors[i][j].type, "  🟪  ");
         break;
          case(11):
        strcpy(colors[i][j].type, "   ◙  ");
         break;
          case(12):
        strcpy(colors[i][j].type, "  🟨  ");
         break;
          case(13):
        strcpy(colors[i][j].type, "  🟩  ");
         break;
          case(14):
        strcpy(colors[i][j].type, "  🟥  ");
         break;
          case(15):
        strcpy(colors[i][j].type, "  ⬛  ");
         break;
          case(16):
      strcpy(colors[i][j].type, "      ");
         break;
         case(17):
      strcpy(colors[i][j].type, "  🫀  ");
         break;
      case(18):
      strcpy(colors[i][j].type, "  🇫🇷  ");
         break;
      }
   }
}
    for(int j=0; j<ROWS; j++){
      printf("\033[%dm",val);//affiche l'arriere plan
      printf("%s",colors[0][j].type);//affiche la première ligne du tableau
      Coul("0");
      val++;
    }
  printf("\n");
   
    for(int i=1; i<ROWS-1; i++){
      for(int j=0; j<ROWS; j++){
       printf("\033[%dm",colors[i][j].background);//affiche l'arriere plan
    printf("%s",colors[i][j].type);
        
    }
      printf("\n");
  }


    for(int j=0; j<ROWS; j++){
      printf("\033[%dm",val2);//affiche l'arriere plan
     // printf("\033[%dm",val2-10);//permet de modifier la couleur du symboles en fonction de la couleur de fond
      printf("%s",colors[7][j].type);//affiche la dernière ligne du tableau
      Coul("0");
      val2--;
    }

}
