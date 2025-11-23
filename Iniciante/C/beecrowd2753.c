#include <stdio.h>

int main(void){
    int i, j = 0;
    char alfabeto[] = "abcdefghijklmnopqrstuvwxyz";

    for(i = 97; i < 123; i++, j++){
        printf("%d e %c\n",i,alfabeto[j]);
    }

    return 0;
}