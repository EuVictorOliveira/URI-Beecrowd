#include <stdio.h>

int main(void){

    int idade, soma, i;
    float media;

    soma=0;
    i=0;
    scanf("%d", &idade);
    soma = soma + idade;
    while(idade>0){
        scanf("%d",&idade);
        if(idade >= 0)
            soma += idade;
        i++;

    }
    media = ((soma*1.0)/i);
    printf("%.2f", media);
    return 0;

}
