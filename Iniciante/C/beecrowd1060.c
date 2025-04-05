#include <stdio.h>
int main(){
    
    int N,pos;
    float X;
    
    N=6;
    pos=0;
    while(N>0){
        scanf("%f",&X);
        if(X>0)
            pos=pos+1;
    
        N=N-1;
    }
    
    printf("%d valores positivos\n",pos);

    return 0;
}