#include <stdio.h>

int main(void){

    int tempoTotal, tempoHoras, tempoMinutos, tempoSegundos, resto; 

    scanf("%d", &tempoTotal);

    tempoHoras = tempoTotal / 3600;
    resto = tempoTotal % 3600;
    tempoMinutos = resto / 60;
    resto = resto % 60;
    tempoSegundos = resto;

    printf("%d:%d:%d\n",tempoHoras,tempoMinutos,tempoSegundos);

    return 0;
}