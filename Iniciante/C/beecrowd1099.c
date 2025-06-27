#include <stdio.h>

int main(){

    int N,X,Y,Z,somaImpares;

    somaImpares=0;
    scanf("%d",&N);
    while(N>0){
       scanf("%d%d",&X,&Y);
       if(X>Y){
            Z=X;
            X=Y;
            Y=Z;
       }

       for(X=X+1 ; X<Y; X=X+1){
            if(X%2!=0)
                somaImpares=somaImpares+X;
       }
      
       printf("%d\n", somaImpares);
       somaImpares=0;
       N=N-1;
    }
    return 0;
}