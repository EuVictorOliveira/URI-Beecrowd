#include<stdio.h>

int main(){
    int N,i,n;

    scanf("%d",&N);

    for(i=1;i<=N;i++){
     scanf("%d",&n);
     printf("resposta %d: %d\n",i,n);
    }

    return 0;
}