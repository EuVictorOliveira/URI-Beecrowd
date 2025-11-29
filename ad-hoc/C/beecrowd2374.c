#include <stdio.h>

int DiferencaPressao(int N,int M){
    return N-M;
}
int main(void){
    int N,M;

    scanf("%d%d",&N,&M);
    printf("%d\n",DiferencaPressao(N,M));

    return 0;
}