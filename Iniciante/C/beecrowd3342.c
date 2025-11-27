#include <stdio.h>
#include <math.h>

int main(void){
    int n,a,b;

    scanf("%d",&n);
    if(n%2==0){
        printf("%d casas brancas e %d casas pretas\n",n*n/2,n*n/2);
    }else{
        a=(pow(n,2)/2)+(n%2);
        b=(pow(n,2)/2);
        printf("%d casas brancas e %d casas pretas\n",a,b);
    }

    return 0;
}