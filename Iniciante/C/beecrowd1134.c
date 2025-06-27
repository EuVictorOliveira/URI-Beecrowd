#include <stdio.h>

int main(){

    int N,al,gas,die;

    al=0;
    gas=0;
    die=0;

    scanf("%d",&N);
    while(N!=4){
        if(N == 1){
            al = al+1;
            scanf("%d",&N);
        }
        else if(N == 2){
            gas = gas+1;
            scanf("%d",&N);
        }
        else if(N == 3){
            die = die+1;
            scanf("%d",&N);
        }
        else
            scanf("%d",&N);

    }

    puts("MUITO OBRIGADO");
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",gas);
    printf("Diesel: %d\n",die);

    return 0;
}