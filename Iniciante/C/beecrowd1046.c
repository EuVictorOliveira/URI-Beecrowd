#include <stdio.h>

int main(){

    int horaInicial,minutoInicial,horaFinal,minutoFinal;

    scanf("%d%d%d%d",&horaInicial,&minutoInicial,&horaFinal,&minutoFinal);

    if(horaInicial==horaFinal && minutoInicial==minutoFinal)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if(horaInicial<=horaFinal &&  minutoInicial<=minutoFinal)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",horaFinal-horaInicial,minutoFinal-minutoInicial);
    else if(horaInicial<=horaFinal &&  minutoInicial>=minutoFinal)
        printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",60-(minutoInicial-minutoFinal));
    else if(horaInicial>=horaFinal && minutoInicial<=minutoFinal)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTOS(S)\n",24-horaInicial+horaFinal, minutoFinal-minutoInicial);
    

    return 0;

}