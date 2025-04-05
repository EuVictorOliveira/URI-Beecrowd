#include <stdio.h>
#include <math.h>

int main(void){

    float x1,y1;
    float x2,y2, p;

    scanf("%f%f",&x1,&y1);    
    scanf("%f%f",&x2,&y2);

    p=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("%.4f\n",p);
    

    return 0;
}