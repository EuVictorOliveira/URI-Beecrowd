#include <stdio.h>

int main(void){
    int nPessoas, alturaMinima, alturaMaxima, alturaPessoa;
    int contador=0;

    while(scanf("%d %d %d",&nPessoas, &alturaMinima, &alturaMaxima) != EOF){;
        while(nPessoas--){
            scanf("%d",&alturaPessoa);

            if(alturaPessoa >= alturaMinima && alturaPessoa <= alturaMaxima)
                contador++;
        }
    
    printf("%d\n",contador);
    contador = 0;

    }

    return 0;
}