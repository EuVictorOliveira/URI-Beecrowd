#include <stdio.h>

int main(void){
    int p,produto,q;
    float soma=0;

    scanf("%d",&p);
    while(p--){
        scanf("%d%d",&produto,&q);
        if(produto==1001)
            soma+=1.50*q;
        if(produto==1002)
            soma+=2.50*q;
        if(produto==1003)
            soma+=3.50*q;
        if(produto==1004)
            soma+=4.50*q;
        if(produto==1005)
            soma+=5.50*q;
    }

    printf("%.2f\n",soma);

    return 0;
}
