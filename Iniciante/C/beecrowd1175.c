#include <stdio.h>

int main(){

    int N[20],i,inicial,final,aux;

    for(i=0; i<20; i=i+1){
        scanf("%d",&N[i]);
    }

    inicial=0;
    final=19;
    while(final>=10){
        aux=N[inicial];
        N[inicial]=N[final];
        N[final]=aux;
        inicial=inicial+1;
        final=final-1;
    }

    for(i=0; i<20; i=i+1)
        printf("N[%d] = %d\n",i,N[i]);

    return 0;
}