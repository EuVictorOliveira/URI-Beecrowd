#include <stdio.h>

int main(void){
    char palavra[10000];
    int i,C;

    scanf("%d%*c",&C);
    while(C--){
        for(i=0;i<10000;i++){
            scanf("%c",&palavra[i]);
            if(palavra[i] == '\n'){
                printf("Y\n");
                break;
            }
        }
    }
    

    return 0;
}