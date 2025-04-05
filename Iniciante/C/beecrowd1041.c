#include <stdio.h>

int main(void){

    float x,y;
    
    scanf("%f%f",&x,&y);

    if(x>0 && y>0)
        puts("Q1");
    else if(x<0 && y>0)
        puts("Q2");
    else if(x<0 && y<0)
        puts("Q3");
    else if(x>0 && y<0)
        puts("Q4");

    if(x==0 && y==0)
        puts("Origem");

    if(x==0 && y!=0)
        puts("Eixo Y");
    
    if(y==0 && x!=0)
        puts("Eixo X");

    return 0;
}