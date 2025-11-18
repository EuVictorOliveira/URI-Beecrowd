#include <stdio.h>

int main(void){

    int R1,R2,T;

    scanf("%d",&T);
    while(T>0){
        scanf("%d%d",&R1,&R2);
        printf("%d", R1+R2);

        T=T-1;
    }

    return 0;
}
