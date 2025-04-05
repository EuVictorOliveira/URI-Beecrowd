#include <stdio.h>

int main(void){

    int number, hours;
    float sHours, salary;

    scanf("%d%d", &number, &hours);
    scanf("%f", &sHours);

    salary = hours * sHours;
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}