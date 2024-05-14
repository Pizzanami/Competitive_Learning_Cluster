#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#ifndef CLUSTERIZADOR_H
#define CLUSTERIZADOR_H 1
typedef struct{
    int carac;
    float* x;
    float* x_norm;
    }data;

typedef struct{
    int cant;
    data* X;
    }dataset_normal;

typedef struct{
    int cant_clust;
    data** clust;
}clusters;

// Funciones

float* normalizacion(float* vector, int size);
float* clusterizar();

#include "Clusterizador.c"
#endif