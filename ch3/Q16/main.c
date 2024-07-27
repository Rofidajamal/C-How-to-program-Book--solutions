#include <stdio.h>
#include <stdlib.h>

int main()
{
    float gallon, miles, result;
    gallon = miles = result =0;

    printf("Enter the gallons used (-1 to end): ");
    scanf("%f",&gallon);
    while (gallon!=-1){
        printf("Enter the miles driven: ");
        scanf("%f",&miles);
        result = miles/gallon;
        printf("The miles/gallon for this tank was %.4f \n\n",result);
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f",&gallon);
    }
    return 0;
}
