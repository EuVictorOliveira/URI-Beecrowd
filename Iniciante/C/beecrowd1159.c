#include <stdio.h>

int main(){

    int X,i,somaPares;

    somaPares=0;
    scanf("%d",&X);
    while(X!=0){
            i=X+10;
            for(;X<i;X=X+1){
                if(X%2==0){
                    somaPares=somaPares+X;
                }
            }

            printf("%d\n",somaPares);
            somaPares=0;
            scanf("%d",&X);
        }

    return 0;
}