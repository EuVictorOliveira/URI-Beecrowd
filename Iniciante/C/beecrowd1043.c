#include <stdio.h>

int main(void){

    float A,B,C,area,perimetro;

    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);

    if(A>=B+C || B>=A+C || C>=B+A){
        area=((A+B)*C)/2;
        printf("Area = %.1f\n", area);
    }else{
         perimetro=A+B+C;
         printf("Perimetro = %.1f\n",perimetro);
    }

    return 0;


}