#include"lib.h"


void conditions2(int* a,int*b, int i, int j );
void conditions1(int* f,int*g, int i, int j );
void conditionsStart(int* x,int*y, int i, int j );
void choisirPion(int* x, int* y, int*a, int *b, Pion colors[ROWS][ROWS]); 
void vide_buffer();
int bloquer( int* posx2, int* posy2, Pion color[ROWS][ROWS]);
int bloque1( int* posx, int* posy2, Pion color [ROWS][ROWS]);
int fin_de_partie(int* score1, int* score2, int *rec, int* rec2, int* psp, Pion color[ROWS][ROWS]);
int check_obstacles(int x1, int y1, int x2, int y2, Pion board[ROWS][ROWS]); 
