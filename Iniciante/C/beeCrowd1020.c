#include <stdio.h>

int main(void){

    int tempoTotal, tempoAnos, tempoMeses, tempoDias, resto; 

    scanf("%d", &tempoTotal);

    tempoAnos = tempoTotal / 365;
    resto = tempoTotal % 365;
    tempoMeses = resto / 30;
    resto = resto % 30;
    tempoDias = resto;

    printf("%d anos(s)\n%d mes(es)\n%d dia(s)\n",tempoAnos,tempoMeses,tempoDias);

    return 0;
}