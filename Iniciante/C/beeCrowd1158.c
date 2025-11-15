#include <stdio.h>

int main(){

    int N,X,Y,somaImpares;

    somaImpares=0;
    scanf("%d",&N);
    while(N>0){
        scanf("%d%d",&X,&Y);
        Y=Y*2;
        while(Y>0){
            if(X%2!=0){
                somaImpares=somaImpares+X; 
            }
            X=X+1;
            Y=Y-1;
        }
        printf("%d\n",somaImpares);
        somaImpares=0;
        N=N-1;
    }

    return 0;
}