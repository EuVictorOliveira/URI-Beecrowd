#include <stdio.h>

int main(void){

    float N1,N2,N3,N4,media,mediaFinal,notaExame;

    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);

    media= ((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
    if(media>=7.0){
        printf("Media: %.1f\n",media);
        printf("Aluno aprovado.\n");
    }else if(media>=5.0 && media<=6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&notaExame);
        printf("Nota do exame: %.1f\n",notaExame);
        mediaFinal=(media+notaExame)/2;
        if(media>=5.0){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", mediaFinal);
        }
    }else{
        printf("Media: %.1f\n",media);
        printf("Aluno reprovado.\n");
    }

    return 0;

}
