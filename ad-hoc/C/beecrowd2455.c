#include <stdio.h>

int main(void){
    int peso1, comprimento1, peso2, comprimento2;

    scanf("%d %d %d %d", &peso1, &comprimento1, &peso2, &comprimento2);

    if(peso1 * comprimento1 == peso2 * comprimento2)
        printf("0\n");
    else if(peso1 * comprimento1 > peso2 * comprimento2)
        printf("-1\n");
    else
        printf("1\n");


    return 0;

}