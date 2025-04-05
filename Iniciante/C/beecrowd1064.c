#include <stdio.h>


int main(){
    
    int N,pos;
    float X, soma;
    
    N=6;
    pos=0;
    soma=0;
    while(N>0){
        scanf("%f",&X);
        if(X>0){
            pos=pos+1;
            soma=soma+X;
        }
        N=N-1;
    }
    
    printf("%d valores positivos\n",pos);
    printf("%.1f\n",soma/pos);

    return 0;
}