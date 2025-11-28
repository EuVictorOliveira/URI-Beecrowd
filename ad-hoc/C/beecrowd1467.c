#include <stdio.h>

int main(void){
    int A,B,C;

    while(scanf("%d%d%d",&A,&B,&C) != EOF){
        if(A!=B && A!=C)
            printf("A\n");
        if(B!=A && B!=C)
            printf("B\n");
        if(C!=A && C!=B)
            printf("C\n");
        if(A==B && A==C)
            printf("*\n");
    }

    return 0;
}