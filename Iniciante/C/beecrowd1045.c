#include <stdio.h>

int main(){

    int inicio,fim,tempo;

    scanf("%d%d",&inicio,&fim);

    if(inicio==fim)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if(inicio>fim){
        tempo=24-inicio+fim;
        printf("O JOGO DUROU %d HORA(S)\n",tempo);
    }else{
        tempo=fim-inicio;
        printf("O JOGO DUROU %d HORA(S)\n",tempo);
    }
    

    return 0;

}