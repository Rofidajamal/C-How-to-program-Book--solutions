#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int number1 = 960; // initialize number1

 // demonstrate bitwise left shift
 puts( "\nThe result of right shifting" );
 displayBits( number1 );
 puts( "4 bit positions using the right shift operator >> is" );
 displayBits( number1 >> 4);


    return 0;
}


void displayBits( unsigned int value )
{
 unsigned int c; // counter

 // declare displayMask and left shift 31 bits
 unsigned int displayMask = 1 << 31;

 printf( "%7u = ", value );

 // loop through bits
 for ( c = 1; c <= 32; ++c ) {
 putchar( value & displayMask ? '1' : '0' );
 value <<= 1; // shift value left by 1

 if ( c % 4 == 0 ) { // output a space after 8 bits
 putchar( ' ' );
 } // end if
 } // end for

 putchar( '\n' );
 } // end function displayBits
