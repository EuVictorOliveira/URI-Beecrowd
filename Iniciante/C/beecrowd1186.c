#include <stdio.h>

int main(void){
    float m[12][12], soma = 0;
    int i,j,contador=0;
    char operacao;

    scanf("%c",&operacao);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%f",&m[i][j]);
        
            if(j > 11-i){
                soma+=m[i][j];
                contador++;
            }
        }
    }

    if(operacao == 'S')
        printf("%.1f\n",soma);
    else
        printf("%.1f\n",(float)soma/contador);

    return 0;
}