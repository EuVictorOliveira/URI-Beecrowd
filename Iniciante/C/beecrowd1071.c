#include <stdio.h>

int main(){

    int X,Y,Z,soma;

    soma=0;
    scanf("%d",&X);
    scanf("%d",&Y);

    if(X>Y){
        Z=X;
        X=Y;
        Y=Z;
    }

    while(X<Y){
        X=X+1;
        if(X!=Y){
            if(X%2!=0){
                soma=soma+X;
            }
        }
    }

    printf("%d\n",soma);

    return 0;
}
