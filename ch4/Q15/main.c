#include <stdio.h>
#include <stdlib.h>


int main( void )
{
    double amount; // amount on deposit
    double principal = 1000.0; // starting principal
     double rate = 0.05; // annual interest rate
     unsigned int year; // year counter
     printf( "%4s%21s\n", "Year", "Amount on deposit" );

   for (;rate<=0.1;rate+=0.01){
       printf(" \n\nRate : %.2f\n",rate);

    for ( year = 1; year <= 10; ++year ) {
        amount = principal * pow( 1.0 + rate, year );
        printf( "%4u%21.2f\n", year, amount );
     }
   }
    return 0;
}
