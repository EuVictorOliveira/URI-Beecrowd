#include <stdio.h>

int main(void){
    int huguinho, zezinho, luisinho;
    
    scanf("%d%d%d",&huguinho,&zezinho,&luisinho);
    
    if ((zezinho > huguinho && huguinho > luisinho) || (zezinho < huguinho && huguinho < luisinho))
        printf("huguinho\n");
    else if ((huguinho > zezinho && zezinho > luisinho) || (huguinho < zezinho && zezinho < luisinho))
        printf("zezinho\n");
    else
        printf("luisinho\n");

    return 0;
}