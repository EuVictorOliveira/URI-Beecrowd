#include <stdio.h>

int main(void){

    int codigoItem,qtdItem;
    float total;

    scanf("%d%d",&codigoItem,&qtdItem);

    if( codigoItem == 1){
        total=qtdItem*4.0;
        printf("Total: R$ %.2f\n", total);
    }

    if( codigoItem == 2){
        total=qtdItem*4.50;
        printf("Total: R$ %.2f\n", total);
    }

    if( codigoItem == 3){
        total=qtdItem*5.0;
        printf("Total: R$ %.2f\n", total);
    }

    if( codigoItem == 4){
        total=qtdItem*2.0;
        printf("Total: R$ %.2f\n", total);
    }

    if( codigoItem == 5){
        total=qtdItem*1.50;
        printf("Total: R$ %.2f\n", total);
    }


    return 0;
}