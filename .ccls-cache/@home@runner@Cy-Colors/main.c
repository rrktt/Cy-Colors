#include "move.h"
#include "ini.h"
#include "cy-color.h"

int main() {
  char* text;
 // cycolor();
    Pion color[ROWS][COWS];
    initialisation(color);
    affiche(color);
    
    move(color);
    
    return 0;
}
