#include <stdio.h>

int main(){

    int N,dias;
    float comida;

    dias=0;
    scanf("%d",&N);
    while(N>0){ 
        scanf("%f",&comida);
            for(; comida>1; comida=comida/2)
                dias=dias+1;

        printf("%d dias\n", dias);
        dias=0;
        N=N-1;
    }

    return 0;
}