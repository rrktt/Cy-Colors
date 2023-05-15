#ifndef STRUCT_H
#define STRUCT_H
#include <stdbool.h>
typedef struct{
int color ;
int background ;
bool promoted ;// true = promue, false = non promue
char type[7];
int abs ;
int ord ;
int p;
}Pion;
#endif
