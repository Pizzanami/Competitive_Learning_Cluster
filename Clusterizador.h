#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#ifndef CLUSTERIZADOR_H
#define CLUSTERIZADOR_H 1

typedef struct{
    int carac;
    float* x;
    float* x_norm;
    }Data;

typedef struct{
    int cant;
    Data* X;
    }Dataset_normal;

typedef struct{
    int cant_clust;
    Data** clust;
}Clusters;


// Funciones
void init_Data(Data *data, int car);
Data normalizacion(Data dato);
float* clusterizar();

#include "Clusterizador.c"
#endif