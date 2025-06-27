#include <stdio.h>

int main(void){

    int N, valor;

    scanf("%d",&N);
    while(N>0){
        scanf("%d", &valor);
        if(valor%2==0 && valor>0){
            puts("EVEN POSITIVE");
        }else if(valor%2==0 && valor<0){
            puts("EVEN NEGATIVE");
        }
    
        if(valor%2!=0 && valor>0){
            puts("ODD POSITIVE");
        }else if(valor%2!=0 && valor<0){
            puts("ODD NEGATIVE");
        }

        if(valor==0){
            puts("NULL");
        }

        N=N-1;
    }


    return 0;
}