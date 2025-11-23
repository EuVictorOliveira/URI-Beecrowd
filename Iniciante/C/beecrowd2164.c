#include <stdio.h>
#include <math.h>

double FibonacciRapido(int n){

    return ( pow((1+sqrt(5))/2,n) - pow((1-sqrt(5))/2,n) ) / sqrt(5);

}

int main(void){
    int n;

    scanf("%d",&n);

    printf("%.1lf\n",FibonacciRapido(n));

    return 0;
}