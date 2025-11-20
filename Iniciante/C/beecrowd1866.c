#include <stdio.h>

int main(){

    int C,N;

    scanf("%d",&C);
    while(C>0){
        scanf("%d",&N);
        if(N%2==0)
            printf("0\n");
        else
            printf("1\n");
            
        C=C-1;
    }

    return 0;
}