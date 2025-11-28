#include <stdio.h>

int main(void){

    int N,i,ladoMoeda,contadorMaria=0;

    while(1){
        scanf("%d",&N);
        if(N==0)
            break;

        for(i=N;i>0;i--){   
            scanf("%d",&ladoMoeda);
            if(ladoMoeda==0){
                ++contadorMaria;
            }
        }

        printf("Mary won %d times and John won %d times\n",contadorMaria,N-contadorMaria);
        contadorMaria=0;
    }

    return 0;
}
