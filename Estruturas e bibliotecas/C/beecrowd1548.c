#include <stdio.h>

void VerificaTrocas(int alunos[], const int alunosCopia[], int tamanho, int *m){
    int i, j, aux;

    for (i = 0; i < tamanho; i++){
        for (j = i+1; j < tamanho; j++){
            if (alunos[i] < alunos[j]){
                aux = alunos[i];
                alunos[i] = alunos[j];
                alunos[j] = aux;
            }
        }
    }

    for (i = 0; i < tamanho; i++){
        if (alunos[i] != alunosCopia[i])
            (*m)--;
    }

}

int main(void){
    int n, m,i;
    int tamanho;

    scanf("%d",&n);
    while(n--){
        scanf("%d",&m);
        int alunos[m],alunosCopia[m];
        tamanho = sizeof(alunos) / sizeof(alunos[0]);
        for(i=0; i < m; i++){
            scanf("%d",&alunos[i]);
            alunosCopia[i] = alunos[i];
        }

        VerificaTrocas(alunos, alunosCopia, tamanho, &m);
        printf("%d\n",m);

    }

    return 0;
}


