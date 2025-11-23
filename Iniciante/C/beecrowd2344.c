#include <stdio.h>

char RetornaConceito(int N){

    if(N==0)
        return 'E';
    else if(N>=1 && N<=35)
        return 'D';
    else if(N>=36 && N<=60)
        return 'C';
    else if(N>=61 && N<=85)
        return 'B';
    else if(N>=86 && N<=100)
        return 'A';

    return '?';
}

int main(void){
    int N;

    scanf("%d",&N);
    printf("%c\n",RetornaConceito(N));

    return 0;
}