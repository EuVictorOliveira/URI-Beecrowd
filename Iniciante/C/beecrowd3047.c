#include <stdio.h>

int IdadeMaisVelho(int m, int a, int b){
    int terceiroFilho;

    terceiroFilho = m - (a + b);
    if (terceiroFilho > a &&  terceiroFilho > b)
        return terceiroFilho;
    else if (a > b && a > terceiroFilho)
        return a;
    else
        return b;

}

int main(void){
    int M, A, B;

    scanf("%d %d %d",&M,&A,&B);
    printf("%d\n",IdadeMaisVelho(M,A,B));

    return 0;
}