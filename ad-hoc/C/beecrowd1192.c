#include <stdio.h>

int main(void){
    int a,b, nTestes;
    char c;

    scanf("%d", &nTestes);

    while(nTestes--){

        scanf("%d %c %d", &a, &c, &b);

        if(a == b){
            printf("%d\n", a*b);
            continue;
        }

        if( c >= 'A' && c <= 'Z'){
            printf("%d\n", b-a);
            continue;
        }

        if( c >= 'a' && c <= 'z'){
            printf("%d\n", a+b);
            continue;
        }


    }

    return 0;
}