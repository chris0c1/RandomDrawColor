#ifndef __FICHIER_H
#define __FICHIER_H
 
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "ensemble.h"

typedef int** Tab;

typedef struct { 
	char * nbMage;
	int nbl;
	int nbh;
	Tab tableau;
}PBM;

typedef struct {
	char *nbMage;
	int nbl;
	int nbh;
	int max;
	Tab tableau;
}PPM;


PBM Read(char * filename);

void Write(PPM p);

void Generate(int n,int m);


#endif
