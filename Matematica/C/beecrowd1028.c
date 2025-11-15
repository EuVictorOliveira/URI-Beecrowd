#include <stdio.h>

int main(){

    int N,F1,F2,resto;

    scanf("%d",&N);
    while(N>0){

        scanf("%d%d",&F1,&F2);
        do{
            resto=F1%F2;
            F1=F2;
            F2=resto;

        }while(resto!=0);

        printf("%d\n",F1);

        N=N-1;
    }



    return 0;
}