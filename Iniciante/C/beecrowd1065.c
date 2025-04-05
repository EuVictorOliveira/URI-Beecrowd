#include <stdio.h>


int main(){
    
    int N,X,pares;
    
    N=5;
    pares=0;
    while(N>0){
        scanf("%d",&X);
        if(X%2==0){
            pares=pares+1;
        }
        N=N-1;
    }
    
    printf("%d valores pares\n",pares);
 

    return 0;
}