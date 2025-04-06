#include <stdio.h>
#include <string.h>


void OrdenaVetor(int codigoLivros[], int n){
    int i, j, aux, menor;
	
	for(i = 0; i < n; i++){
		menor = i;
		for(j = i+1; j < n; j++)
			if(codigoLivros[j] < codigoLivros[menor]) menor = j;
		
		aux = codigoLivros[i];
		codigoLivros[i] = codigoLivros[menor];
		codigoLivros[menor] = aux;
	}

}

int main(void){
    int n, i;
    
    while(scanf("%d",&n) != EOF){
        int codigoLivros[n];

        for(i =0; i < n; i++){
            scanf("%d",&codigoLivros[i]);
        }

        OrdenaVetor(codigoLivros, n);

        for(i = 0; i < n; i++){
            printf("%04d\n", codigoLivros[i]);
        }

    }

    return 0;

}