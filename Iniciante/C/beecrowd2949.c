#include <stdio.h>

int main(void){
    int N, a=0, e=0, h=0, m=0, x=0;
    char raca, nome[100];

    scanf("%d",&N);
    while(N--){

        scanf("%s%*c%c",nome,&raca);

        if(raca == 'A')
            a++;
        if(raca == 'E')
            e++;
        if(raca == 'H')
            h++;
        if(raca == 'M')
            m++;
        if(raca == 'X')
            x++;
    }

    printf("%d Hobbit(s)\n",x);
    printf("%d Humano(s)\n",h);
    printf("%d Elfo(s)\n",e);
    printf("%d Anao(oes)\n",a);
    printf("%d Mago(s)\n",m);

    return 0;
    
}