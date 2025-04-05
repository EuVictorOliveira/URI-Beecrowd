#include <stdio.h>

int main(void){

    int peca1, qtdPeca1, peca2, qtdPeca2;
    float valor1, valor2, total;

    scanf("%d%d%f",&peca1,&qtdPeca1,&valor1);
    scanf("%d%d%f",&peca2,&qtdPeca2,&valor2);

    total = qtdPeca1 * valor1 + qtdPeca2 * valor2;
    printf("VALOR A PAGAR = R$ %.2f\n", total); 

    return 0;
}