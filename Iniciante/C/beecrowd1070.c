#include <stdio.h>


int main(){
    
    int N,X;
 
    scanf("%d",&X); 
    N=12;
    while(N>0){
        if(X%2!=0)
            printf("%d\n",X);
    
        N=N-1;
        X=X+1;
    }

    return 0;
}