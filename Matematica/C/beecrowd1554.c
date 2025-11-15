#include <stdio.h>
#include <math.h>

int main(){
    int c, n, x, y, bola, x1, y1, i;
    float d, menorD;

    scanf("%d", &c);
    while(c--){
        scanf("%d", &n);
        scanf("%d %d", &x, &y);
        menorD = 100000.0;
        
        for(i = 0; i < n; i++){
            scanf("%d %d", &x1, &y1);
            d = sqrt(pow((x1 - x), 2) + pow((y1 - y), 2));
            if(d < menorD){
                menorD = d;
                bola = i+1;
            }
        }
        printf("%d\n", bola);
    }

    return 0;
}