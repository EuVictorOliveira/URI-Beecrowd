#include <stdio.h>
 
int main() {
 
    float N;
    
    scanf("%f", &N);
    
    if( N >= 0 && N <= 25)
        puts("Intervalo [0,25]");
    else if( N > 25 && N <= 50)
        puts("Intervalo (25,50]");
    else if( N > 50 &&  N <= 75)
        puts("Intervalo (50,75]");
    else if( N > 75 && N <= 100)
        puts("Intervalo (75,100]");
    else 
        puts("Fora de intervalo");
            
 
    return 0;
}