#include <stdio.h>

int main(){

    int N,posicao,posicaoMaior,t,maior;

    t=1;
    scanf("%d",&maior);
    posicao=1;
    while(t<100){
        scanf("%d",&N);
        posicao=posicao+1;
        if(N>maior){
            maior=N;
            posicaoMaior=posicao;
        }
        t=t+1;
    }
    printf("%d\n%d\n",maior,posicaoMaior);

    return 0;

}