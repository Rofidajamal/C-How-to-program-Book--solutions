#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fahrenheit;
    printf("%s","enter temprature in fahrenheit: \n");
    scanf("%d",&fahrenheit);
    float celsius = 5.0 / 9.0 * ( fahrenheit - 32 );
    printf("%.3f",celsius);
    return 0;
}
