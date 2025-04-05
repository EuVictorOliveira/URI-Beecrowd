#include <stdio.h>


int main(){
    
    int N,i;
 
    i=0;
    scanf("%d",&N); 
    while(N>=i){
        if(i%2==0 && i>0)
            printf("%d^2 = %d\n",i,i*i);
    
        i=i+2;
    }

    return 0;
}