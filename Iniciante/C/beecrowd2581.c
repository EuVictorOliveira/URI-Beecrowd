#include <stdio.h>

int main(void){
    char pergunta[1000];
    int n,i=0;

    scanf("%d",&n);
    while(n+1){
        scanf("%c",&pergunta[i]);
        while(pergunta[i] != '\n'){
            scanf("%c",&pergunta[i]);
            if(pergunta[i] == '\n'){
                printf("I am Toorg!\n");
                break;
            }
            i++;
        }
        n--;
    }
        
    return 0;
}