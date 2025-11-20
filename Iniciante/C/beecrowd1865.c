#include <stdio.h>

int main(void){
    int c, forca;
    char nome[1000];

    scanf("%d",&c);
    while(c--){
        scanf("%s%d",&nome,&forca);
        if(nome[0] == 'T' && nome[1] == 'h' && nome[2] == 'o' && nome[3] == 'r')
            printf("Y\n");
        else 
            printf("N\n");
    }

    return 0;

}