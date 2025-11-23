#include <stdio.h>

void BubbleSort(int *nHabitantes, int tamanho){
    int aux;

     for(int contador = 1; contador < tamanho; contador++){
            for(int i = 0; i < tamanho-1; i++){
                    if(nHabitantes[i] < nHabitantes[i+1]){
                        aux = nHabitantes[i];
                        nHabitantes[i] = nHabitantes[i+1];
                        nHabitantes[i+1] = aux;
                    }
            }
    }

}

int main(void){
    int n, nConsultas, i, notaConsultada;

    while(scanf("%d %d", &n, &nConsultas) != EOF){;

        int nHabitantes[n];

        for(i = 0; i < n; i++){
            scanf("%d", &nHabitantes[i]);
        }

        BubbleSort(nHabitantes, n);
        
        for(i = 0; i < nConsultas; i++){
            scanf("%d", &notaConsultada);
            printf("%d\n", nHabitantes[notaConsultada-1]);
        }

    }

    return 0;
}