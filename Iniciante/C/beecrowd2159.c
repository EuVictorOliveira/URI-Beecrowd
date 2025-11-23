#include <stdio.h>
#include <math.h>

int main(void){
    int n;

    scanf("%d",&n);
    printf("%.1f ", n/log(n));
    printf("%.1f", 1.25506*(n/log(n)));

    return 0;
}