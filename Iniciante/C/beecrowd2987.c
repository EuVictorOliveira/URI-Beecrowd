#include <stdio.h>

int main (void){
    char alfabeto[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char letra;
    int i;

    scanf("%c",&letra);
    for(i=0; i < 26; i++){
        if(letra == alfabeto [i])
            printf("%d\n",++i);
    }

    return 0;
}