#include <stdio.h>

int main(void){
    int nCasos, hora, minuto, ocorrencia;

    scanf("%d", &nCasos);

    while(nCasos--){
        scanf("%d %d %d", &hora, &minuto, &ocorrencia);

        if(ocorrencia == 0){
            printf("%02d:%02d - A porta fechou!\n", hora, minuto);
        }

        if(ocorrencia == 1){
            printf("%02d:%02d - A porta abriu!\n", hora, minuto);
        }

    }

    return 0;

}