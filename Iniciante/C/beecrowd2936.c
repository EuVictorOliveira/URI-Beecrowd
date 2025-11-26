#include <stdio.h>

int main(void){
    int p[5],i;
    
    for(i=0; i<5; i++){
        scanf("%d",&p[i]);
    }
    
    printf("%d\n",225+p[0]*300+p[1]*1500+p[2]*600+p[3]*1000+p[4]*150);

    return 0;
}
