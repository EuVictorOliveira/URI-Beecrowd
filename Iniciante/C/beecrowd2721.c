#include <stdio.h>

int main(void){
    int bolasIndividuais[9], bolasTotais = 0;

    for(int i = 0; i < 9; i++){
        scanf("%d", &bolasIndividuais[i]);
        bolasTotais+= bolasIndividuais[i];
    }

    int resto = bolasTotais % 9;

    switch (resto){
        case 0:
            printf("Rudolph\n");
            break;
        case 1:
            printf("Dasher\n");
            break;
        case 2:
            printf("Dancer\n");
            break;
        case 3:
            printf("Prancer\n");
            break;
        case 4:
            printf("Vixen\n");
            break;
        case 5:
            printf("Comet\n");
            break;
        case 6:
            printf("Cupid\n");
            break;
        case 7:
            printf("Donner\n");
            break;
        case 8:
            printf("Blitzen\n");
            break;
    }



    return 0;

}