#include <stdio.h>

int main(void){
    int L,C;
    int preta = 0;
    int branca = 1;

    scanf("%d %d",&L,&C);

    if((L % 2 == 0 && C % 2 == 0) || (L % 2 == 1 && C % 2 == 1))
        printf("%d\n",branca);
    else
        printf("%d\n",preta);


    return 0;
}