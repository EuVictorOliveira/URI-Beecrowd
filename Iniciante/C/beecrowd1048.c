#include <stdio.h>

int main(){

    float salario,reajuste,novoSalario;

    scanf("%f",&salario);
    if(salario>=0 && salario<=400.00){
        reajuste=salario*0.15;
        novoSalario=salario+reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",novoSalario,reajuste);
    }

    if(salario>=400.01 && salario<=800.00){
        reajuste=salario*0.12;
        novoSalario=salario+reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",novoSalario,reajuste);
    }

    if(salario>=800.01 && salario<=1200.00){
        reajuste=salario*0.10;
        novoSalario=salario+reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",novoSalario,reajuste);
    }

    if(salario>=1200.01 && salario<=2000.00){
        reajuste=salario*0.07;
        novoSalario=salario+reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",novoSalario,reajuste);
    }

    if(salario>2000){
        reajuste=salario*0.04;
        novoSalario=salario+reajuste;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4\n %%",novoSalario,reajuste);
    }

    return 0;
}