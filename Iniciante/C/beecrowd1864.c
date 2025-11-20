#include <stdio.h>

int main(void){
    char frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int n;

    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        printf("%c",frase[i]);
    }

    printf("\n");

    return 0;
}