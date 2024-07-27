#include <stdio.h>
#include <stdlib.h>
int roundToInteger( float x){
    return floor( x + .5 );
}

int roundToTenths( float x ){
    return floor( x * 10 + .5 ) / 10;
}


int roundToHundreths(float x ){
    return floor( x * 10 + .5 ) / 100;

}

int roundToThousandths(float x ){
    return floor( x * 10 + .5 ) / 1000;
}
int main()
{
    float x;
    printf("enter a number or -1 to end ");
    scanf("%f",&x);

    while(x != -1){
        printf("%f\t%d\t%d\t%d\t%d\n",x,roundToInteger(x),roundToTenths(x),roundToHundreths(x) ,roundToThousandths(x));
        scanf("%f",&x);

    }


    return 0;
}
