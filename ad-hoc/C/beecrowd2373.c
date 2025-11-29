#include <stdio.h>

int main(void){
    int N,L,C,qtdCoposQuebrados=0;

    scanf("%d",&N);
    while(N>0){
        scanf("%d%d",&L,&C);
        if(L>C)
            qtdCoposQuebrados+=C;

        N--;
    }
    printf("%d\n",qtdCoposQuebrados);
    
    return 0;
}