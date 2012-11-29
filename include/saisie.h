#ifndef __saisie_h_
#define __saisie_h_

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define TAILLE_BUFF_SAISIE 1024

int nbreArgs(char *); 
char **lecture(int *);
void freeCmd(char **,int);

#endif
