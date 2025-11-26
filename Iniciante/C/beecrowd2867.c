#include <stdio.h>
#include <math.h>

int main(void){
    int m, n, nCasos;
    

    scanf("%d", &nCasos);


    while(nCasos--){
        scanf("%d %d", &n,&m);

        printf("%.f\n", (floor(log10(pow(n,m)))) + 1);
    }


    return 0;
}