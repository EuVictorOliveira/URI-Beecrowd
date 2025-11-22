#include <stdio.h>

int main(void){
    int x,z,contador = 1,soma;

    scanf("%d",&x);
    scanf("%d",&z);
    soma = x;
    
    while(x>=z)
        scanf("%d",&z);
    
    do{
       ++x;
       soma+=x;
       contador++;
    }while(soma <= z);
    printf("%d\n",contador);

    return 0;
}
