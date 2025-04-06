#include <stdio.h>
#include <string.h>

int main (void){
    char codigoBacteria[101], codigoResistencia[101];

    while(scanf("%s%s", codigoBacteria, codigoResistencia) != EOF){

        if(!strstr(codigoBacteria, codigoResistencia))
            printf("Nao resistente\n");
        else
            printf("Resistente\n");


    }

    return 0;
}