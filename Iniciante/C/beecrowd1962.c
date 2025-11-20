#include <stdio.h>

int main(void){
    int N,T;

    scanf("%d",&N);
    while(N--){
        scanf("%d",&T);

        int diferenca = T - 2015;

        if(diferenca >= 0)
            printf("%d A.C.\n", diferenca+1);

        if(diferenca < 0)
            printf("%d D.C.\n",-diferenca);
          
    }

    return 0;
}