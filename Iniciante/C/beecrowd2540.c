#include <stdio.h>

int main(void){
    int  nJogadores, vFavoraveis = 0, i;

    while(scanf("%d", &nJogadores) != EOF){
        int votos[nJogadores];

        for(i = 0; i < nJogadores; i++){
            scanf("%d", &votos[i]);
        }

        for(i = 0; i < nJogadores; i++){
            if(votos[i] == 1)
                vFavoraveis++;
        }

        if( vFavoraveis >= (double)2/3 * nJogadores)
            printf("impeachment\n");
        else
            printf("acusacao arquivada\n");

        
        vFavoraveis = 0;

    }


    return 0;

}