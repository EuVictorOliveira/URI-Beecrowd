#include <stdio.h>

int main(void){
    int sorteados[6], apostados[6], i,j, qtdAcertos = 0;

    for(i = 0; i < 6; i++){
        scanf("%d", &sorteados[i]);
    }

    for(i = 0; i < 6; i++){
        scanf("%d", &apostados[i]);
    }

    for(i = 0; i < 6; i++){
        for(j = 0; j < 6; j++){
            if(apostados[i] == sorteados[j])
                qtdAcertos++;
        }
    }

    switch (qtdAcertos){
        case 6:
            printf("sena\n");
            break;
        case 5:
            printf("quina\n");
            break;
        case 4:
            printf("quadra\n");
            break;
        case 3:
            printf("terno\n");
            break;
        default:
            printf("azar\n");
            break;
    }

    return 0;
}