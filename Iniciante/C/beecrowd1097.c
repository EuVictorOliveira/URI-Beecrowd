#include <stdio.h>

int main(){
    
    int i,j;

    i=1;
    j=7;

    while(j>=5){
        printf("I=%d J=%d\n",i,j);
        j=j-1;
    }

    i=3;
    j=9;

    while(j>=7){
        printf("I=%d J=%d\n",i,j);
        j=j-1;
    }

    i=5;
    j=11;

    while(j>=9){
        printf("I=%d J=%d\n",i,j);
        j=j-1;
    }

    i=7;
    j=13;

    while(j>=11){
        printf("I=%d J=%d\n",i,j);
        j=j-1;
    }

    i=9;
    j=15;

    while(j>=13){
        printf("I=%d J=%d\n",i,j);
        j=j-1;
    }
    
    
    return 0;
}