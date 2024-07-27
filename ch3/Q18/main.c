#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gross =0.0;
    float result = 0.0;

    printf("Enter sales in dollars (-1 to end): ");
    scanf("%f",&gross);

    while(gross != -1){
        result = 200 + (gross*0.09);
        printf("Salary is: $%.2f", result);

        printf("\n\nEnter sales in dollars (-1 to end): ");
        scanf("%f",&gross);

    }
    return 0;
}
