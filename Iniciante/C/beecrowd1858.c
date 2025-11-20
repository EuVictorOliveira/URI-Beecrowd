#include <stdio.h>

int main(void){
    int N,i,menor,posicao=1;

    scanf("%d",&N);
    
    int pessoas[N];

    for(i = 0; i < N; i++){
        scanf("%d",&pessoas[i]);
    }

    menor = pessoas[0];
    for( i = 1; i < N; i++){
        if(pessoas[i] < menor){
            menor = pessoas[i];
            posicao = i+1;
        }
    }

    printf("%d\n",posicao);

    return 0;
}