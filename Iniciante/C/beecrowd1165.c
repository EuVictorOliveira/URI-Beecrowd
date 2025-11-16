#include <stdio.h>

int main(){

    int N,i,soma,t;

    soma=0;
    scanf("%d",&t);
    while(t>0){
        scanf("%d",&N);
        for(i=1; i<=N; i=i+1){
            if(N%i==0){
                soma=soma+1;
            }
        }

        if(soma==2){
            printf("%d eh primo\n",N);
        }
        else{
            printf("%d nao eh primo\n",N);
        }
        soma=0;
        t=t-1;
    }

    return 0;

}