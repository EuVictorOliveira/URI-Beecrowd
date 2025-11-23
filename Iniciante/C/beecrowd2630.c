#include <stdio.h>

int main(void){
    int T, rgb[3], caso=1,i;
    char metodo[5];

    scanf("%d",&T);
    while(T--){
        scanf("%s", metodo);
        
        for(i = 0; i < 3; i++)
            scanf("%d",&rgb[i]);

        if(metodo[1] == 'i'){
            int menor = rgb[0];
            for( i = 1; i < 3; i++){
                if(rgb[i] < menor)
                    menor = rgb[i];
            }

            printf("Caso #%d: %d\n",caso, menor);
            caso++;
        }

        if(metodo[1] == 'a'){
            int maior = rgb[0];
            for( i = 1; i < 3; i++){
                if(rgb[i] > maior)
                    maior = rgb[i];
            }

            printf("Caso #%d: %d\n",caso, maior);
            caso++;
        }

        if(metodo[1] == 'e'){
            printf("Caso #%d: %d\n",caso,(rgb[0]+rgb[1]+rgb[2])/3);
            caso++;
        }

        if(metodo[1] == 'y'){
            printf("Caso #%d: %d\n",caso,(int)(0.30*rgb[0]+0.59*rgb[1]+0.11*rgb[2]));
            caso++;
        }

    }



    return 0;
}