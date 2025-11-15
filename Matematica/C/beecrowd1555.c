#include <stdio.h>
#include <math.h>

int main(){

    int N,x,y,funcaoRafael,funcaoBeto,funcaoCarlos;

    scanf("%d",&N);
    while(N>0){
        scanf("%d%d",&x,&y);
        
        funcaoRafael = (9*pow(x,2)) + pow(y,2);
        funcaoBeto = (2*pow(x,2)) + (25*pow(y,2));
        funcaoCarlos = (-100*x) + pow(y,3);

        if(funcaoRafael > funcaoBeto && funcaoRafael > funcaoCarlos)
            printf("Rafael ganhou\n");
        else if(funcaoBeto > funcaoRafael && funcaoBeto > funcaoCarlos)
            printf("Beto ganhou\n");
        else
            printf("Carlos ganhou\n");

        N=N-1;
    }

    return 0;

}