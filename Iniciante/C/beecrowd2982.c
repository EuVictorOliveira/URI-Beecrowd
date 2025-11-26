#include <stdio.h>

int main(void){
    int N, valor, totalVerba = 0, totalGasto = 0;
    char T;

    scanf("%d%*c", &N);

    while(N--){
        scanf("%c %d%*c", &T, &valor); 
        
        if(T=='G')
            totalGasto+=valor;
        else
            totalVerba+=valor;
    }

    if(totalVerba - totalGasto >= 0)
        printf("A greve vai parar.\n");
    else
        printf("NAO VAI TER CORTE, VAI TER LUTA!\n");

    return 0;
}