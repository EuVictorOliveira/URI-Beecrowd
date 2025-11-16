#include <stdio.h>

int main(void){
    int T,i,j,N[1000];

    j=0;
    scanf("%d",&T);
    for(i=0;i<1000;i++){
        N[i]=j;
        j++;
        if(j==T)
            j=0;
        printf("N[%d] = %d\n",i,N[i]);
    }

    return 0;
}