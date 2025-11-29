#include <stdio.h>

int main(void){
    int diametro, altura, largura, profundidade;


    scanf("%d %d %d %d", &diametro, &altura, &largura, &profundidade);

    if(diametro <= altura && diametro <= largura && diametro <= profundidade)
        printf("S\n");
    else
        printf("N\n");




    return 0;

}