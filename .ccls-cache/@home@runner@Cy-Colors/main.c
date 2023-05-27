#include "move.h"
#include "ini.h"
#include "cy-color.h"
#include "accueil.h"
int main() {
  char* text;
   //if(accueil()==1){
 // cycolor();
    Pion color[ROWS][COWS];
    initialisation(color);
    affiche(color);
    
    move(color);
   //}
    return 0;
}
