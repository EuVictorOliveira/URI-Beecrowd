#include <stdio.h>

int main(void){
    int N,A,B, soma=0;

    while(1){
        scanf("%d%d%d",&N,&A,&B);

        if(N==0 && A==0 && B==0)
            break;
        for(int i=1; i<=N; i++){
            if(i%A==0 || i%B==0)
                soma++;
        }
        printf("%d\n",soma);
        soma=0;
    }

    return 0;
}