#include <stdio.h>

int main(void){
    char nome[1000];
    int saque, bloqueio, ataque; 
    int saqueSucesso, bloqueioSucesso, ataqueSucesso;
    int somaSaqueTotal=0, somaBloqueioTotal=0, somaAtaqueTotal=0;
    int somaSaqueSucessoTotal=0, somaBloqueioSucessoTotal=0, somaAtaqueSucessoTotal=0;
    int N;

    scanf("%d",&N);
    while(N--){
        scanf("%s", nome);
        scanf("%d %d %d",&saque,&bloqueio,&ataque);
        scanf("%d %d %d",&saqueSucesso, &bloqueioSucesso, &ataqueSucesso);

        somaSaqueTotal+=saque;
        somaBloqueioTotal+=bloqueio;
        somaAtaqueTotal+=ataque;

        somaSaqueSucessoTotal+=saqueSucesso;
        somaBloqueioSucessoTotal+=bloqueioSucesso;
        somaAtaqueSucessoTotal+=ataqueSucesso;

        
    }

    printf("Pontos de Saque: %.2f %%.\n", ((float)somaSaqueSucessoTotal/somaSaqueTotal) * 100);
    printf("Pontos de Bloqueio: %.2f %%.\n", ((float)somaBloqueioSucessoTotal/somaBloqueioTotal) * 100);
    printf("Pontos de Ataque: %.2f %%.\n", ((float)somaAtaqueSucessoTotal/somaAtaqueTotal) * 100);
 
    return 0;
}