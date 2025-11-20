#include <stdio.h>

int main(void){
    int ar[1000], N, i;
    int multiplosDois = 0, multiplosTres = 0, multiplosQuatro = 0, multiplosCinco = 0;

    scanf("%d",&N);
    for( i = 0; i < N; i++){
        scanf("%d",&ar[i]);
        if(ar[i] % 2 == 0)
            multiplosDois++;
        if(ar[i] % 3 == 0)
            multiplosTres++;
        if(ar[i] % 4 == 0)
            multiplosQuatro++;
        if(ar[i] % 5 == 0)
            multiplosCinco++;
    }

    printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n",multiplosDois,multiplosTres,multiplosQuatro,multiplosCinco);

    return 0;
}
