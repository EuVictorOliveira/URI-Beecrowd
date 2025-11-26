#include <stdio.h>

int main(void){
    int H, E, A, O, W, X;
    int bem, mal;

    scanf("%d %d %d %d %d %d",&H,&E,&A,&O,&W,&X);

    bem = H+E+A+X;
    mal = O+W;

    if(bem >= mal)
        printf("Middle-earth is safe.\n");
    else
        printf("Sauron has returned.\n");

    return 0;
}