#include <stdio.h>

int main(void){
    int N,maior;

    maior=0;
    do{
        scanf("%d",&N);
        if(N>maior)
            maior=N;
    }while(N!=0);
    printf("%d\n",maior);

    return 0;
}