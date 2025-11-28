#include <stdio.h>

int main(void){
    int nRoupas, minLavagem, maxLavagem, minSecagem, maxSecagem;

    scanf("%d %d %d %d %d", &nRoupas, &minLavagem, &maxLavagem, &minSecagem, &maxSecagem);


    if(nRoupas >= minLavagem && nRoupas <= maxLavagem && nRoupas >= minSecagem && nRoupas <= maxSecagem){
        printf("possivel\n");
    }else
        printf("impossivel\n");




    return 0;
}