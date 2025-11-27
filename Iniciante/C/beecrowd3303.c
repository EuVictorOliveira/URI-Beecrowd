#include <stdio.h>

int main(void){
    char palavra[21];
    int i=0,qtdCaracteres = 0;

    while(1){
        scanf("%c",&palavra[i]);
        if(palavra[i] == '\n')
            break;
        else
            qtdCaracteres++;
        i++;
    }
        

    if(qtdCaracteres >= 10)
        printf("Palavrao\n");
    else
        printf("Palavrinha\n");


    return 0;
}