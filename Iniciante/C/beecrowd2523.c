#include <stdio.h>

int main(void){
    char letras[27];
    int nLampadas,letra,i;
    
    while(scanf("%s",letras) != EOF){
        scanf("%d",&nLampadas);
        char palavra[nLampadas];
        for(i = 0; i < nLampadas; i++){
            scanf("%d",&letra);
            palavra[i] = letras[letra-1];
        }
       for(i = 0; i < nLampadas; i++){
            printf("%c",palavra[i]);    
       }
       printf("\n");
    }


    return 0;
}