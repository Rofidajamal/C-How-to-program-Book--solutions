#include <stdio.h>
#include <stdlib.h>

int main()
{

    float principal , rate, days, result;
    printf("Enter loan principal (-1 to end): ");
    scanf("%f", &principal);

    while(principal != -1){

        printf("Enter interest rate: ");
        scanf("%f",&rate);

        printf("Enter term of the loan in days: ");
        scanf("%f",&days);

        result = (principal * rate * days)/365;
        printf("The interest charge is $%.4f ",result);

        printf("\n\nEnter loan principal (-1 to end): ");
        scanf("%f", &principal);
    }





    return 0;
}
