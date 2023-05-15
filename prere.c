#include"prere.h"
//#include "ini.h"

void affiche(Pion colors[ROWS][ROWS]){
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
      printf("\033[%dm",val);
      printf("%s",colors[0][j].type);
      Coul("0");
      val++;
    }
  printf("\n");
   
    for(int i=1; i<ROWS-1; i++){
      for(int j=0; j<ROWS; j++){
          printf("\033[%dm",colors[i][j].background);
    printf("%s",colors[i][j].type);
        
    }
      printf("\n");
  }


    for(int j=0; j<ROWS; j++){
      printf("\033[%dm",val2);
      printf("\033[%dm",val2-10);
      printf("%s",colors[7][j].type);
      Coul("0");
      val2--;
    }

}
