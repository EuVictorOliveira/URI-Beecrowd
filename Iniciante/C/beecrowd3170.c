#include <stdio.h>

int main(void){
    int b,g;

    scanf("%d %d",&b,&g);

    if(g <= b*2)
        printf("Amelia tem todas bolinhas!\n");
    else
        printf("Faltam %d bolinha(s)\n",(g-(b*2))/2);


    return 0;
}