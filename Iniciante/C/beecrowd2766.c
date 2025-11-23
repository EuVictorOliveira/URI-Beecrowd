#include <stdio.h>


int main(void){

    char string[40];

    for (int i = 1; i <= 10; i++){

        scanf("%s", string);

        if (i == 3)
            printf("%s\n",string);
        else if (i == 7)
            printf("%s\n",string);
        else if (i == 9)
            printf("%s\n",string);

    }

    return 0;

}