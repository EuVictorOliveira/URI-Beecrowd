#include <stdio.h>

int main(){

    int N,i,soma,t;

    soma=0;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&N);
        for(i=1; i<N; i++){
           if(N%i==0){
                soma=soma+i;
           }
        }

        if(soma==N)
            printf("%d eh perfeito\n",N);
        else
            printf("%d nao eh perfeito\n",N);

        soma=0;
        t=t-1;
    }
    return 0;
}