#include <stdio.h>

int main(){

    long long int N1,N2,aux;

    while(scanf("%lld %lld",&N1,&N2) != EOF){
        if(N1>N2){
            aux=N1;
            N1=N2;
            N2=aux;
        }

        printf("%lld\n",N2-N1);
    }
    
    return 0;
}