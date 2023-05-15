#include"ini.h"

void initialisation(Pion colors[ROWS][ROWS]){

  int** valcl=valcoul();
  int val=40;
  int val2=47;
for(int j=0;j<ROWS;j++){
   
    colors[0][j].p=j;
    colors[0][j].abs=0;
    colors[0][j].ord=j;
    colors[0][j].background=val;
    colors[0][j].promoted=0;
    
    val++;
  } 

  for(int i=1; i<ROWS-1; i++){
      for(int j=0; j<ROWS; j++){
        colors[i][j].p=16;
        colors[i][j].background=valcl[i][j];
    }
  }
 
  for(int j=0;j<ROWS;j++){
      
      colors[0][j].abs=7;
    colors[0][j].ord=j;
      colors[7][j].background=val2;
    colors[0][j].promoted=0;
    colors[7][j].p=j+8;
    
      val2--;
  }
  
    
  
  
  
  

}
