#include <stdio.h>
#include <string.h>

int main(void){
    char binario[150];
    int qtdUm = 0, i;

    scanf("%s", binario);

    for( i = 0; binario[i]; i++){
        if(binario[i] == '1')
            qtdUm++;
    }

    if(qtdUm % 2 == 0)
        binario[i] = '0';
    else 
        binario[i] = '1';

    
    binario[++i] = '\0';

    printf("%s\n", binario);


    return 0;

}