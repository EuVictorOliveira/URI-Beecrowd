#include <stdio.h>

unsigned long long CalculaSomaFatorial(int M, int N){
    unsigned long long fatorialM=1, fatorialN=1;

    for(;M>=1;M--){
        fatorialM*=M;
    }
    for(;N>=1;N--){
        fatorialN*=N;
    }
    return fatorialM+fatorialN;
}

int main(){
    int M,N;

    while(scanf("%d%d",&M,&N) != EOF){
        printf("%llu\n",CalculaSomaFatorial(M,N));
    }
    return 0;
}