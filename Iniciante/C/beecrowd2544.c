#include <stdio.h>
#include <math.h>

int main(void){
    int qtdNinjas;


    while(scanf("%d", &qtdNinjas) != EOF){

        printf("%d\n", (int) log2(qtdNinjas));

    }


    return 0;


}