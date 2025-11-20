#include <stdio.h>

int main(void){
    float A,B,novoValor;

    scanf("%f%f",&A,&B);
    novoValor = B-A;
    printf("%.2f%%\n",(novoValor/A)*100);

    return 0;
}