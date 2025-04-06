#include <stdio.h>
#include <string.h>

int main(void){
    char risada[51], risadaSemConsoante[51];
    int i, j=0, tamanho, tamanhoRisada;

    scanf("%s",risada);
    tamanhoRisada = strlen(risada);

    for(i = 0; i < tamanhoRisada; i++){
        if(risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u'){
            risadaSemConsoante[j] = risada[i];
            j++;
        }
    }

    risadaSemConsoante[j] = '\0';
    tamanho = strlen(risadaSemConsoante);

    for(i = 0, j = tamanho-1; i < tamanho; i++, j--){
         if(risadaSemConsoante[i] != risadaSemConsoante[j]){
                printf("N\n");
                return 0;
         }
    }

    printf("S\n");
    
    return 0;
}