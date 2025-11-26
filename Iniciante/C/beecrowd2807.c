#include <stdio.h>

int main(void){
    long long int fibonacci[41];
    int qtdTermos, i; 

     fibonacci[0] = 1;
     fibonacci[1] = 1;


    scanf("%d", &qtdTermos);

    for(i = 2; i < qtdTermos; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

    for(i = qtdTermos - 1; i >= 1; i--)
        printf("%lld ", fibonacci[i]);

    printf("%lld\n", fibonacci[i]);


    return 0;

}