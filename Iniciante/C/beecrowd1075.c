#include <stdio.h>

int main(){
    
    int N,i;

    i=1;
    scanf("%d",&N);
    while(i<=10000){
        if(i%N==2)
            printf("%d\n",i);
        
        i=i+1;
    }

    return 0;
}