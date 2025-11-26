#include <stdio.h>
#include <string.h>

int main(void){
    char a[20], b[20];

    scanf("%s",a);
    scanf("%s",b);

    if(strcmp(a,b) < 0){
        printf("%s\n%s\n",a,b);
    }

    if(strcmp(a,b) > 0){
        printf("%s\n%s\n",b,a);
    }

    if(strcmp(a,b) == 0){
        printf("%s\n%s\n",a,b);
    }

    
    return 0;

}