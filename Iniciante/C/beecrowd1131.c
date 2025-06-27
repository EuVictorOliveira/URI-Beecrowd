#include <stdio.h>

int main(){

    int golsInter, golsGremio,vitoriasInter,vitoriasGremio,empates,opcao,nGrenais;

    nGrenais=0;
    golsInter=0;
    golsInter=0;
    vitoriasInter=0;
    vitoriasGremio=0;
    empates=0;
    do{
        scanf("%d%d",&golsInter,&golsGremio);


        printf("novo grenal (1-sim 2-nao)");
        puts("");
        scanf("%d",&opcao);

        if(golsInter>golsGremio)
            vitoriasInter=vitoriasInter+1;
        else if(golsInter<golsGremio)
            vitoriasGremio=vitoriasGremio+1;
        else
            empates=empates+1;

        nGrenais=nGrenais+1;

    }while(opcao==1);

    printf("%d grenais\n",nGrenais);
    printf("Inter: %d\n",vitoriasInter);
    printf("Gremio: %d\n",vitoriasGremio);
    printf("Empates: %d\n",empates);

    if(vitoriasInter>vitoriasGremio)
        printf("Inter venceu mais\n");
    else if(vitoriasInter<vitoriasGremio)
        printf("Gremio venceu mais\n");
    else 
        printf("Nao houve vencedor\n");

    return 0;
}