#include <stdio.h>
#include <stdlib.h>

int main()
{
    float hours,  hourlyRate;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%f",&hours);

    while(hours != -1){
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%f", &hourlyRate);

        printf("Salary is $%.2f",hours*hourlyRate);

        printf("\n\nEnter # of hours worked (-1 to end): ");
        scanf("%f",&hours);

    }
    return 0;
}
