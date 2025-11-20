#include <stdio.h>

int main(void){
    int hora, minuto;;


    while(scanf("%d:%d", &hora, &minuto) != EOF){

        if(hora < 7)
            printf("Atraso maximo: 0\n");
        else if(hora == 7 && minuto == 0 )
            printf("Atraso maximo: 0\n");
        else if(hora == 7 && minuto > 0)
            printf("Atraso maximo: %d\n", minuto);
        else if(hora == 8 && minuto == 0)
            printf("Atraso maximo: 60\n");
        else if(hora == 8 && minuto > 0)
            printf("Atraso maximo: %d\n", 60+minuto);
        else if(hora == 9 && minuto == 0)
            printf("Atraso maximo: 120\n");
        
    }

    return 0;


}