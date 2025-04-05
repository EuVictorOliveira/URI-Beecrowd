#include <stdio.h>

int main(void){

    int tempo, velMedia;
    float combustivel;

    scanf("%d",&tempo);
    scanf("%d",&velMedia);

    combustivel= (tempo*1.0*velMedia)/12;
    printf("%.3f\n",combustivel);

    return 0;
}