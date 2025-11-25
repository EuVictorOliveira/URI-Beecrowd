#include <stdio.h>

float CalcularValorGolpe(int Ai, int Di, int Li, int B){
    float valorGolpe;

    valorGolpe = ((float)Ai+Di)/2;
    if(Li%2==0)
        valorGolpe+=B;

    return valorGolpe; 
}

int ComparaValorAtaque(float dabriel, float guarte){

    if(dabriel>guarte)
        return 1;
    else if(dabriel==guarte)
        return 2;
    else
        return 3;
}

int main(void){
    int T,B,Ai,Di,Li;
    float guarte,dabriel;

    scanf("%d",&T);
    for(;T>0;T--){
        scanf("%d",&B);
        scanf("%d%d%d",&Ai,&Di,&Li);
        dabriel = CalcularValorGolpe(Ai,Di,Li,B);
        scanf("%d%d%d",&Ai,&Di,&Li);
        guarte = CalcularValorGolpe(Ai,Di,Li,B);

        switch (ComparaValorAtaque(dabriel,guarte)){
        case 1:
            printf("Dabriel\n");
            break;
        case 2:
            printf("Empate\n");
            break;
        case 3:
            printf("Guarte\n");
            break;
        }
    }

    return 0;
}
