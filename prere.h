#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include<unistd.h>
#define ROWS 8
#define COWS 8
#include "struct.h"
#define Coul(param) printf("\033[%sm",param)
void affiche(Pion colors[ROWS][ROWS]);

