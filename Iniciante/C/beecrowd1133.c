#include <stdio.h>

int main(){

    int X,Y,Z;

    scanf("%d%d",&X,&Y);
    if(X>Y){
        Z=X;
        X=Y;
        Y=Z;
    }

    while(X<Y){
        X=X+1;
        if((X%5==2 || X%5==3) && X!=Y)
            printf("%d\n",X);
    }

    return 0;
}