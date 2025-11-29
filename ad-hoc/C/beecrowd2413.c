#include <stdio.h>

int NumeroPrimeiroLink(int t){
    return t*2*2;
}
int main(void){
    int t;

    scanf("%d",&t);
    printf("%d\n",NumeroPrimeiroLink(t));
    
    return 0;
}