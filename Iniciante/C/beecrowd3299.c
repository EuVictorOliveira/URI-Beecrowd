#include <stdio.h>

int main(void){
    char numero[1000];
    int i=0,azarado=0;

    while(1){
        scanf("%c",&numero[i]);
        if(numero[i] == '\n')
            break;
        i++;
    }
    
    for(int j=0; j < i; j++){
        if(numero[j] == '1' && numero[j+1] == '3')
            azarado = 1;
    }

    for(int k=0; k < i; k++){
        printf("%c",numero[k]);
    }

    if(azarado)
        printf(" es de Mala Suerte\n");
    else
        printf(" NO es de Mala Suerte\n");

    return 0;
}