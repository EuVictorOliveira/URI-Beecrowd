#include <stdio.h>

int main(void){

    int N,i;

    scanf("%d",&N);

    i=1;
    while(N>0){
        printf("%d %d %d PUM\n",i,i+1,i+2);
        i=i+4;
        N=N-1;
    }

    return 0;
}
