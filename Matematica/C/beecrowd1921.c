#include <stdio.h>

long long int CalculaDiagonais(int N){
    long long int d;
    d = (N*(N-3))/2;

    return d;
}

int main(void){
    int N;

    scanf("%d",&N);
    printf("%lli\n",CalculaDiagonais(N));

    return 0;
}