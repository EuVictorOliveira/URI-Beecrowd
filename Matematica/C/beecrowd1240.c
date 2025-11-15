#include <stdio.h>
#include <string.h>

int main (void){
    int N, i, j, tamanhoA, tamanhoB,contador=0;
    char A[1000], B[1000];

    scanf("%d",&N);
    while(N--){

        scanf("%s %s",A,B);
        tamanhoA = strlen(A);
        tamanhoB = strlen(B);


        for (i = tamanhoB - 1, j = tamanhoA - 1; i > -1; i--, j--)
			if (B[i] == A[j])
				contador++;

		if (contador == tamanhoB)
			printf("encaixa\n");
		else
			printf("nao encaixa\n");

		contador = 0;

    }

    return 0;
}