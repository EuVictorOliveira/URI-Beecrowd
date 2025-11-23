#include <stdio.h>

int main(void){
    int N, I, partidas = 0, identificador, jogo;

    while (scanf("%d %d", &N, &I) != EOF){
        for (int i = 0; i < N; i++){
            scanf("%d %d", &identificador, &jogo);
            if (identificador == I && jogo == 0){
                ++partidas;
            }
        }

        printf("%d\n", partidas);
    }

    return 0;
}