#include <stdio.h>

int main(){

    int M,N,X,soma;

    soma=0;
    scanf("%d%d",&M,&N);
    while(M>0 && N>0){
        if(M>N){
                X=M;
                M=N;
                N=X;
        }
        while(M<=N){
            printf("%d ",M);
            soma=soma+M;
            M=M+1;
        }        
        printf("sum=%d\n",soma);
        scanf("%d%d",&M,&N);
        soma=0;
    }
    
    return 0;
    
}