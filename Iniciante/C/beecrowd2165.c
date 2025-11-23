#include <stdio.h>

int main(void){
    char tweet[500];
    int i=0,qtdCaracteres = 0;

    while(1){
        scanf("%c",&tweet[i]);
        if(tweet[i] == '\n')
            break;
        else
            qtdCaracteres++;
        i++;
    }
        

    if(qtdCaracteres > 140)
        printf("MUTE\n");
    else
        printf("TWEET\n");


    return 0;
}