#include <stdio.h>
#include <math.h>

int EhPrimo(int numero){
	int i;

	for(i = 2; i < sqrt(numero); i++){
		if(numero % i == 0)
			return 0;
	}

	return 1;
}

int main(void) {
	int n, numero;
	
	scanf("%d", &n);
	
	while(n--){
	   scanf("%d",&numero);
	   
	   if(EhPrimo(numero))
			printf("Prime\n");
	   else
	   		printf("Not prime\n");
	}

	return 0;
}