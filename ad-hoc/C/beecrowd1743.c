#include <stdio.h>

int main(void){
    int conexao1[5], conexao2[5], i, flag = 0;

    for(i = 0; i < 5; i++)
        scanf("%d", &conexao1[i]);

    for(i = 0; i < 5; i++)
        scanf("%d", &conexao2[i]);

    for(i = 0; i < 5; i++){
        if(conexao1[i] == conexao2[i])
            flag = 1;
    }

    if(flag)
        printf("N\n");
    else
        printf("Y\n");

    return 0;
}