#include <stdio.h>

int main(void){
    int qtdLesmas;


    while(scanf("%d",&qtdLesmas) != EOF){
        int velocidadeLesmas[qtdLesmas];
        int i;

        for(i = 0; i < qtdLesmas; i++){
            scanf("%d",&velocidadeLesmas[i]);
        }

        int maior = velocidadeLesmas[0];
        for(i = 1; i < qtdLesmas; i++){
            if(velocidadeLesmas[i] > maior)
                maior = velocidadeLesmas[i];
        }
        
        if(maior < 10)
            printf("1\n");
        else if(maior >= 10 && maior < 20)
            printf("2\n");
        else
            printf("3\n");
        
    }


    return 0;
}