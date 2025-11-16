#include <stdio.h>

int main(void){
    float m[12][12],soma=0;
    int i, j, contador;
    char operacao;

    scanf("%c",&operacao);

    for(i=0; i<12; i++){
           for(j=0; j<12; j++){
                scanf("%f",&m[i][j]);
           }
    }

    for(i=0; i<12;i++){
        for(j=0; j<12; j++){
            if(i<j){
                soma+=m[i][j];
                contador++;
            }
        }
    } 

    if(operacao == 'S')
        printf("%.1f\n",soma);
    else
        printf("%.1f\n",soma/contador);


    return 0;

}