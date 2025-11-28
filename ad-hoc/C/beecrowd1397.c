#include <stdio.h>

int main(void){

    int N,i,A,B,contadorA=0,contadorB=0;

    scanf("%d",&N);
    while(N>0){
        i=N;
        while(i>0){
            scanf("%d%d",&A,&B);
            if(A>B){
                contadorA=contadorA+1;
            }else if(A<B){
                contadorB=contadorB+1;
            }

            i--;
        }

        printf("%d %d\n",contadorA,contadorB);
        contadorA=0;
        contadorB=0;
        scanf("%d",&N);
    }

    return 0;
}