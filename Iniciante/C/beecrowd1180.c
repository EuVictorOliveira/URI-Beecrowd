#include<stdio.h>
#define n 1000

int main(){
	int x[n],i;
	int menor,posicao,num;
	
	scanf("%d",&num);
	
	
	for(i=0; i<n; i++){
		scanf("%d", &x[i]);
	}
	
	menor = x[0];
	for(i=0; i<n; i++){
		if(x[i]< menor){
			menor= x[i];
			posicao = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
	
	return 0;
}


