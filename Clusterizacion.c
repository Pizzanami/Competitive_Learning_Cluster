#include "Clusterizador.h"

int main(){
    FILE *InputPtr  = fopen("entrada.txt", "r");
    FILE *OutputPtr = fopen("salida.txt", "w");
    if (!InputPtr){
        printf("No se pudo abrir archivo de entrada");
        fclose(OutputPtr);
        return 0;
    }

    for(int i = 0; i < 4; i++){
        //fscanf(InputPtr,"%f %f %f",&a, &b, &c);
        //fprintf(OutputPtr, "La %d matriz es\n", i);
        char linea[80];
        //fgets(&linea[0], 80, fp);
        while(fgets(&linea[0], 80, InputPtr) != NULL){
            char *tok;
            tok = strtok(linea, ", ");
            float suma = 0;
            while (tok != NULL){
                printf("%.2f\n", atof(tok));
                suma += atof(tok);
                tok = strtok(NULL, ", ");

            }
            printf("\nLa suma es %.2f", suma);
        }
    }

    fclose(InputPtr);
    fclose(OutputPtr);
}