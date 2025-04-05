#include <stdio.h>

int main(){

    int i,n,pares,impares,pos,neg;

    i=5;
    pares=0;
    impares=0;
    pos=0;
    neg=0;
    while(i>0){
        scanf("%d",&n);
            if(n>0)
                pos=pos+1;
            if(n<0)
                neg=neg+1;
            if(n%2==0)
                pares=pares+1;
            if(n%2!=0)
                impares=impares+1;

            i=i-1;

    }

    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",pares,impares,pos,neg);

}