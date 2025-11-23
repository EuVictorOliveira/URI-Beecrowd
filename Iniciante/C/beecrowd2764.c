#include <stdio.h>

int main(void){
    char data[9];
    char aux1, aux2;

    scanf("%s",data);
    
    // FAZ PRIMEIRA TROCA
    aux1 = data[0];
    data[0] = data[3];
    data[3] = aux1;

    aux2 = data[1];
    data[1] = data[4];
    data[4] = aux2;

    printf("%s\n",data);

    // DESFAZ PRIMEIRA TROCA
    aux1 = data[3];
    data[3] = data[0];
    data[0] = aux1;

    aux2 = data[4];
    data[4] = data[1];
    data[1] = aux2;

    // FAZ SEGUNDA TROCA
    aux1 = data[0];
    data[0] = data[6];
    data[6] = aux1;

    aux2 = data[1];
    data[1] = data[7];
    data[7] = aux2;

    printf("%s\n",data);

    // DESFAZ SEGUNDA TROCA
    aux1 = data[6];
    data[6] = data[0];
    data[0] = aux1;

    aux2 = data[7];
    data[7] = data[1];
    data[1] = aux2;

    data[2] = '-';
    data[5] = '-';

    printf("%s\n",data);

    return 0;
}

