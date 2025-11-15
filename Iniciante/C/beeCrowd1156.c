#include <stdio.h>

int main(void){
    int i,j=2;
    float soma=1;

    for(i=3;i<=39;i++){
        soma+=(float)i/(float)j;
        i++;
        j*=2;
    }
    printf("%.2f\n",soma);

    return 0;
}