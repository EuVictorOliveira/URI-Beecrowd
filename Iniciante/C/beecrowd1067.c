#include <stdio.h>

int main(){

    int X,i;

    i=0;
    scanf("%d",&X); 
    while(X>i){
        i=i+1;
        if(i%2!=0)
            printf("%d\n",i);
    }

    return 0;

}