#include <stdio.h>

int AreaLosango(int dMaior, int dMenor){
    return (dMaior * dMenor)/2;
}

int main(void){
    int N,dMaior,dMenor;

    scanf("%d",&N);
    while(N>0){
    scanf("%d%d",&dMaior,&dMenor);
    printf("%d cm2\n",AreaLosango(dMaior,dMenor));
    
    N--;
    }

    return 0;
}