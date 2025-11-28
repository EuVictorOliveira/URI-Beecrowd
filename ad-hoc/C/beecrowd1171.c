#include <stdio.h>

int main(void){
    int n, x, contador[2001], i;

    for(i=0; i<2001; i++){
        contador[i] = 0;
    }
   
    scanf("%d",&n);
    for( i = 0; i < n; i++){
        scanf("%d",&x);
        contador[x]++;
    }

    for(i = 1; i < 2001; i++){
        if(contador[i] > 0)
            printf("%d aparece %d vez(es)\n",i,contador[i]);
    }

    return 0;
}