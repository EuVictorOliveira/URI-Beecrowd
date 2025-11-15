#include <stdio.h>
#include <math.h>

float AlturaMaxima(int a, int b, int c){
    float delta;

    delta = pow(b,2) - 4*a*c;

    return -delta/(4*a);
}

int main(void){
    int t,a,b,c;

    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        printf("%.2f\n",AlturaMaxima(a,b,c));
    }

    return 0;
}