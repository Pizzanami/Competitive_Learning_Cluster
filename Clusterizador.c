#include "Clusterizador.h"

void init_Data(Data *data, int car){
    data->x = malloc(car * sizeof(float));
    data->x_norm = malloc(car * sizeof(float));
    for(int i = 0; i < car; i++){
        
    }    
}

void normalizacion(Data dato){
    Data dato_normalizado;
    dato_normalizado.carac = dato.carac;
    float norma = 0;
    for(int i = 0; i < dato.carac; i++){
        norma += dato.x[i]*dato.x[i];        
    }
    norma = fsqrt(norma);
    for(int i = 0; i < dato.carac; i++){
        dato_normalizado.x[i] = dato.x[i]/norma;        
    }
}
float* clusterizar(){

}