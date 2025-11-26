#include <stdio.h>

int main(void){
    float r;

    scanf("%f",&r);
    if(r>0 && r<=10)
      printf("%.2f\n", 2*r*3.14);
    

    return 0;
}