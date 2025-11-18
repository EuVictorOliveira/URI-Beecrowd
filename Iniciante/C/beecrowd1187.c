#include <stdio.h>

int main(void){
    double m[12][12], soma = 0;
    int i, j, aux1=11, aux2=1, contador=0;
    char operacao;

    scanf("%c",&operacao);
    for(i = 0; i < 12; i++){
        for(j = 0; j < 12; j++){
            scanf("%lf",&m[i][j]);
        
           
        }
    }

    for(i=0; i<=4; i++){
		for(j=aux2; j<aux1;j++){
			soma+=m[i][j];
			contador++;
		}

		aux1--;
		aux2++;
	}

    if(operacao == 'S')
        printf("%.1lf\n",soma);
    else
        printf("%.1lf\n",(float)soma/contador);

    return 0;
}