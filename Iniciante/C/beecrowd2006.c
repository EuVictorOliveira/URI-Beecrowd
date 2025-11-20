#include <stdio.h>

int main(void){

    int T,A,B,C,D,E,soma=0;

    scanf("%d",&T);
    scanf("%d%d%d%d%d",&A,&B,&C,&D,&E);

    if(A==T)
        soma++;
    if(B==T)
        soma++;
    if(C==T)
        soma++;
    if(D==T)
        soma++;
    if(E==T)
        soma++;

    printf("%d\n",soma);

    return 0;
}