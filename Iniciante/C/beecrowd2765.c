#include <stdio.h>
#include <string.h>

int main(void){
    char string[200], *ptr;
    int ch =  ',';

    gets(string);

    ptr = strchr(string, ch);
    ptr[0] = '\n';
    printf("%s\n", string);

    return 0;
}