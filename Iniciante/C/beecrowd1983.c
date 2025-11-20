#include <stdio.h>

int main(void){
    int n,i;

    scanf("%d",&n);

    long long int matricula[n],matriculaMaior;
    double nota[n],maior;

  
    for(i = 0; i < n; i++){
        scanf("%lld",&matricula[i]);
        scanf("%lf",&nota[i]);
       
        maior = nota[0];
        for(int j = 1; j < n; j++){
            if(nota[j] > maior){
                maior = nota[j];
                matriculaMaior = matricula[j];
            }
        }
    }

    if(maior >= 8){
        printf("%lld\n",matriculaMaior);
    }else{
        printf("Minimum note note reached\n");
    }

    return 0;
}