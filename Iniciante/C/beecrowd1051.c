#include <stdio.h>

int main(void){

    float renda;

    scanf("%f",&renda);

    if(renda>=0.00 && renda<=2000.00)
        printf("Isento\n");
    else if(renda>=2000.01 && renda<=3000.00)
        printf("R$ %.2f\n", renda=(renda-2000)*0.08);
    else if(renda>=3000.01 && renda<=4500.00)
        printf("R$ %.2f\n", renda=((renda-3000)*0.18)+80);
    else if(renda>4500)
        printf("R$ %.2f\n",renda=((renda-4500)*0.28)+350);

    return 0;
}