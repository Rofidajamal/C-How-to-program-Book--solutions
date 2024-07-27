#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

/* function main begins program execution */
int main( void )
{
	/* initialize a */
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int pass; /* passes counter */
	int i; /* comparison counter */
	int hold; /* temporary location used to swap array elements */
	int swap;
	int c =0;

	printf( "Data items in original order\n" );

	/* output original array */
	for ( i = 0; i < SIZE; i++ ) {
		printf( "%4d", a[ i ] );
	} /* end for */

	/* bubble sort */
	/* loop to control number of passes */
	for ( pass = 0; pass < SIZE-pass; pass++ ) {
            swap =0;

		/* loop to control number of comparisons per pass */
		for ( i = 0; i < SIZE - 1; i++ ) {

			/* compare adjacent elements and swap them if first element is greater than second element */
			if ( a[ i ] > a[ i + 1 ] ) {
				hold = a[ i ];
				a[ i ] = a[ i + 1 ];
				a[ i + 1 ] = hold;
				swap++;
				c++;
			} /* end if */

		} /* end inner for */



		if ( swap == 0 )
			break;

	}

	printf( "\nData items in ascending order\n" );

	for ( i = 0; i < SIZE; i++ ) {
		printf( "%4d", a[ i ] );
	}

	printf( "\n" );
	printf("%d",c);

	return 0;
}

