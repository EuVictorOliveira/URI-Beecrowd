#include <stdio.h>

int main(){

    int X,Y,Z,soma;

    soma=0;
    scanf("%d%d",&X,&Y);
    if(X>Y){
        Z=X;
        X=Y;
        Y=Z;
    }

    while(X<=Y){
        if(X%13!=0)
            soma=soma+X;
        
        X=X+1;
    }

    printf("%d\n",soma);

    return 0;
}