#include <stdio.h>

int main(){

    int quantidadeCedulas, valorDinheiro; 

    scanf("%d", &valorDinheiro);
    printf("%d\n", valorDinheiro);

    quantidadeCedulas = valorDinheiro / 100;
    valorDinheiro = valorDinheiro % 100;
    printf("%d nota(s) de R$ 100,00\n", quantidadeCedulas);

    quantidadeCedulas = valorDinheiro / 50;
    valorDinheiro = valorDinheiro % 50;
    printf("%d nota(s) de R$ 50,00\n", quantidadeCedulas);
   
    quantidadeCedulas = valorDinheiro / 20;
    valorDinheiro = valorDinheiro % 20;
    printf("%d nota(s) de R$ 20,00\n", quantidadeCedulas);

    quantidadeCedulas = valorDinheiro / 10;
    valorDinheiro = valorDinheiro % 10;
    printf("%d nota(s) de R$ 10,00\n", quantidadeCedulas);

    quantidadeCedulas = valorDinheiro / 5;
    valorDinheiro = valorDinheiro % 5;
    printf("%d nota(s) de R$ 5,00\n", quantidadeCedulas);

    quantidadeCedulas = valorDinheiro / 2;
    valorDinheiro = valorDinheiro % 2;
    printf("%d nota(s) de R$ 2,00\n", quantidadeCedulas);

   quantidadeCedulas = valorDinheiro / 1;
   valorDinheiro = valorDinheiro % 1;
   printf("%d nota(s) de R$ 1,00\n", quantidadeCedulas);

   return 0;
}
