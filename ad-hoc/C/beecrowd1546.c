#include <stdio.h>

int main(void){
    int n,k,feedback;

    scanf("%d",&n);
    while(n--){
        scanf("%d",&k);
        
        while(k--){
            scanf("%d",&feedback);
            switch (feedback){
            case 1:
                printf("Rolien\n");
                break;
            case 2:
                printf("Naej\n");
                break;
            case 3:
                printf("Elehcim\n");
                break;
            case 4:
                printf("Odranoel\n");
                break;
            }
        }

    }

    return 0;
}