#include <stdio.h>
#include <stdlib.h>

int main()
{
    float product1 = 2.98;
    float product2 = 4.50;
    float product3 = 9.98;
    float product4 = 4.49;
    float product5 = 6.87;
    float price =0.0;
    float quantity =0.0;
    char a;

    printf("Enter the number of product 1..5 : ");
    scanf("%c", &a);

    switch (a ){
        case '1':
            price = product1;
            break;
        case '2':
            price = product2;
            break;
        case '3':
           price = product3;
            break;
        case '4':
            price = product4;
            break;
        case '5':
          price = product5;
            break;
        default: puts("Error invalid choise");
    }

    printf("Enter the Quantity : ");
    scanf("%f",&quantity);

    printf("the retail price = $%.2f", price*quantity);

    return 0;
}
