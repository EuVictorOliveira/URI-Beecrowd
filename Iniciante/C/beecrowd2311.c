#include <stdio.h>

int main(void){
    int N, i;
    double grauDificuldade, nota[7], maior, menor, soma = 0, somaSemExtremos;
    char nome[100];

    scanf("%d",&N);
    while(N--){
        scanf("%s%*c",nome);
        scanf("%lf",&grauDificuldade);

        for(i = 0; i < 7; i++){
            scanf("%lf",&nota[i]);
            soma+=nota[i];
        }

        maior = nota[0];
        menor = nota[0];

        for(i = 1; i < 7; i++){
            if(nota[i] > maior)
                maior = nota[i];

            if(nota[i] < menor)
                menor = nota[i];
        }

        somaSemExtremos = soma - menor - maior;

        printf("%s %.2lf\n",nome,somaSemExtremos*grauDificuldade);
        soma = 0;
        somaSemExtremos = 0;
    }  

    return 0;
}