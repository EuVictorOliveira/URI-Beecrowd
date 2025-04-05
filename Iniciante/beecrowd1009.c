#include <stdio.h>

int main(void){

    char nome[10];
    double salario, vendas, bonus, total;

    scanf("%s",&nome);
    scanf("%lf",&salario);
    scanf("%lf",&vendas);

    bonus = vendas * 0.15;
    total = salario+bonus;
    printf("TOTAL = R$ %.2lf\n", total);

    return 0;
}

