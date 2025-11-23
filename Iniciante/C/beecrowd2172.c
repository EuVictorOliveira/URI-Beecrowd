#include <stdio.h>

int main(void){
    int X;
    unsigned long long M;

    while(1){
        scanf("%d %llu",&X,&M);
        if(X == 0 && M == 0)
            break;
        else
            printf("%llu\n",X*M);
    }

    return 0;

}