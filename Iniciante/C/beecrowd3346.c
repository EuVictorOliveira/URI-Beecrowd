#include <stdio.h>

int main(void){
    float f1,f2;

    scanf("%f%f",&f1,&f2);
    printf("%.6f\n", (100 + f1) * (100 + f2)/100-100);

    return 0;
}