#include <stdio.h>

int main(void){
    int C,N;

    scanf("%d",&C);
    while(C--){
        scanf("%d",&N);
        if(N<=8000)
            printf("Inseto!\n");
        else
            printf("Mais de 8000!\n");
    }

    return 0;
}