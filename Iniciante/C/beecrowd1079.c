#include <stdio.h>

int main(){

    int N;
    float n1,n2,n3, media;

    scanf("%d",&N);
    while(N>0){
        scanf("%f%f%f",&n1,&n2,&n3);
        media=((n1*2)+(n2*3)+(n3*5))/10;
        printf("%.1f\n",media);
        media=0;
        N=N-1;
    }
    
    return 0;
}