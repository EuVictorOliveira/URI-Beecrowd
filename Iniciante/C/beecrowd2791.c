#include <stdio.h>

int main(void){
    int c[4],posicao;
    
    for(int i=0;i<4;i++){
        scanf("%d",&c[i]);
        if(c[i]==1)
            posicao=i+1;
    }
    printf("%d\n",posicao);

    return 0;
}