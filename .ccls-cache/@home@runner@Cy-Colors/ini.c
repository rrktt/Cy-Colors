#include"ini.h"
//procédure d'initialisation des caractéristiques des cases et donc des pion 
void initialisation(Pion colors[ROWS][ROWS]){

  int** valcl=valcoul();
  int val=40;
  int val2=47;
  
for(int j=0;j<ROWS;j++){//initialisation de la premère ligne du tableau
   
    colors[0][j].p=j;// indique ce que doit contenir la case (vide, pion1, pion 2)
    //colors[0][j].abs=0;
    //colors[0][j].ord=j;
    colors[0][j].background=val;// indique la couleur de fond de la case
    colors[0][j].promoted=0;// indique si le pion est promue ou non
    
    val++;
  } 

  for(int i=1; i<ROWS-1; i++){
      for(int j=0; j<ROWS; j++){
        colors[i][j].p=16;
        colors[i][j].background=valcl[i][j];// indique la couleur de fond de la case et obtenu par un tableau 2d contenant les correspondance ANSI des couleurs.
    }
  }
 
  for(int j=0;j<ROWS;j++){
    
    colors[7][j].p=j+8;  
     // colors[7][j].abs=7;
    //colors[7][j].ord=j;
    colors[7][j].background=val2;
    colors[7][j].promoted=0;
    
    
      val2--;
  }
  
    
}
  
