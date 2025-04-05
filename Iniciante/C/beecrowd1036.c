#include <stdio.h>
#include <math.h>

int main(void){

    double A,B,C;
    double delta, x1, x2;

    scanf("%lf%lf%lf",&A,&B,&C);
    delta = (B*B) - (4*A*C);

    if ( A == 0 )
        printf("Impossivel Calcular");
    else if(delta<0)
        printf("Impossivel calcular");    
    else{
          x1 = ((-1*B) + sqrt(delta)) / (2*A);
          x2 = ((-1*B) - sqrt(delta)) / (2*A);

          printf("R1 = %.5lf\nR2 = %.5lf\n", x1, x2);
    }



    return 0;
}