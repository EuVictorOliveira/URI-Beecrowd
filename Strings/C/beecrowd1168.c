#include <stdio.h>

int main(void){
    int n, numeroLeds = 0;
    char sequencia[102];

    scanf("%d",&n);
    while(n--){
        scanf("%s", sequencia);
            for(int j = 0; sequencia[j] != '\0';  j++){
                switch (sequencia[j]){
                
                    case '0':
                        numeroLeds += 6;
                        break;
                    case '1':
                        numeroLeds += 2;
                        break;
                    case '2':
                        numeroLeds += 5;
                        break;
                    case '3':
                        numeroLeds += 5;
                        break;
                    case '4': 
                        numeroLeds += 4;
                        break;
                    case '5':
                        numeroLeds += 5;
                        break;
                    case '6':
                        numeroLeds += 6;
                        break;
                    case '7':
                        numeroLeds += 3;
                        break;
                    case '8':
                        numeroLeds += 7;
                        break;
                    case '9': 
                        numeroLeds += 6;
                        break;

                    default:
                        break;
                }
    
            }
            printf("%d leds\n",numeroLeds);
            numeroLeds = 0;
    }


    return 0;
}