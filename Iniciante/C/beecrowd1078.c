#include <stdio.h>

int main(){

    int N,i;

    scanf("%d",&N);
    for(i=1; i<=10; i=i+1){
        printf("%d x %d = %d\n",i,N,i*N);
    }

    return 0;
}