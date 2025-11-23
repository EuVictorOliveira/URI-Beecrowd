#include <stdio.h>


int main (void){

	unsigned long long  qtdPatinhos;

	while (1){

		scanf("%llu",&qtdPatinhos);

		if (qtdPatinhos == 0)
			printf("%llu\n",qtdPatinhos);
		else if(qtdPatinhos > 0)
			printf("%.llu\n", qtdPatinhos-1);

	}


}