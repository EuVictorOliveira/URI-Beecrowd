#include <stdio.h>

int main(void){

    int n, carrinhos = 0, bonecas = 0;
    char genero, nomeCrianca[100];

    scanf("%d",&n);

    while(n--){
        scanf("%s%*c%c",nomeCrianca,&genero);

        if(genero == 'M')
            carrinhos++;
        else
            bonecas++;

    }

    printf("%d carrinhos\n%d bonecas\n",carrinhos,bonecas);

    return 0;
}