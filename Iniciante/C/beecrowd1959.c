#include <stdio.h>

unsigned int CalculaPerimetro(unsigned int N, unsigned int L){
    unsigned int perimetro; 

    perimetro = N*L;

    return perimetro;
}

int main(void){
    unsigned int N,L;

    scanf("%d%d",&N,&L);
    printf("%u ",CalculaPerimetro(N,L));

    return 0;
}