#include <stdio.h>

int main(void){
    int N, i, posicao=0, maior;

    scanf("%d",&N);
    int R[N];
    
    for(i = 0; i < N; i++){
        scanf("%d",&R[i]);
    }

    maior = R[0];
    for(i = 0; i < N-1; i++){
        if(R[i+1] > maior)
            maior = R[i+1];
        
        if(R[i+1] < maior){
            posicao = i+2;
            break;
        }
    }

    printf("%d\n",posicao);

    return 0;
}