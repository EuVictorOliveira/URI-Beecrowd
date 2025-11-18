#include <stdio.h>

int main(){

    int N,i;

    scanf("%d",&N);
    while(N!=0){
        for(i=1; i<N; i=i+1){
            printf("%d ",i);  
        }
        printf("%d\n",i);
        scanf("%d",&N);
    }
    return 0;
}
