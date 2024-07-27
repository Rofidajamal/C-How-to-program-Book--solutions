#include <stdio.h>
#include <stdlib.h>
int RoundNumber(float x)
{
    return floor( x + .5 );
}
int main()
{
    float x;
    printf("enter a number or -1 to end ");
    scanf("%f",&x);
    while(x !=-1){
        printf("%.2f\t%d\n",x,RoundNumber(x));
        scanf("%f",&x);
    }



    return 0;
}
