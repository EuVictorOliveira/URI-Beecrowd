#include <stdio.h>

int main(){

    int N,X,Y;

    scanf("%d\n",&N);
    while(N>0){
        scanf("%d%d",&X,&Y);
            if(Y==0)
                puts("divisao impossivel");
            else 
                printf("%.1f\n",(1.0*X)/Y);
        N=N-1;
    }

    return 0;
}