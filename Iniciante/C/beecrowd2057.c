#include <stdio.h>

int main(void){
    int horaSaida, tempoViagem, fusoHorario;


    scanf("%d %d %d", &horaSaida, &tempoViagem, &fusoHorario);

    if(horaSaida == 0)
        horaSaida = 24;

    int horaChegada = horaSaida + tempoViagem + fusoHorario;

    if(horaChegada > 24){
        horaChegada -= 24;
    }

    if(horaChegada == 24)
        horaChegada = 0;

    printf("%d\n", horaChegada);

    return 0;


}