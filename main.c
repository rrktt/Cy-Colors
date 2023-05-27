#include "move.h"
#include "ini.h"
#include "cy-color.h"
#include "accueil.h"
int main() {
  char* text;
   accueil();//Affiche l'accueil et reprend le programme lorsque l'utilisateur appui sur une touche
 // cycolor();
    Pion color[ROWS][COWS];
    initialisation(color);
    affiche(color);
    
    move(color);
   //}
    return 0;
}
