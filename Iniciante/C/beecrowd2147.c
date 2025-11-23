#include <stdio.h>

int main(void){
    char palavra[10001];
    int t, contador=0;

    scanf("%d",&t);
    while(t--){
        scanf("%s",palavra);
        for(int i = 0; palavra[i] != '\0';i++)
            contador++;
        
        printf("%.2f\n",(float)contador/100);
        contador=0;
    }

    return 0;
}