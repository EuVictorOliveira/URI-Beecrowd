#include <stdio.h>


int main() {

    int nPontos;
    scanf("%d", &nPontos);

    printf("%d\n", 1 + (nPontos * (nPontos - 1) * (nPontos - 2) * (nPontos - 3))/24 + (nPontos * (nPontos - 1))/2);

    return 0;
}