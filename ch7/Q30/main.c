#include <stdio.h>
#include <stdlib.h>

void function1( float a );
void function2( float b );
void function3( float c );

int main()
{
    void (*f[ 3 ])( float ) = { function1, function2, function3 };

     size_t choice; // variable to hold user's choice

     printf( "%s", "Enter a number 0 for Circumference 1 for Circle Area 2 for Sphere Volume or 3 to end : " );
     scanf( "%u", &choice );
     float r=0;

     // process user's choice
     while ( choice >= 0 && choice < 3 ) {
        printf("%s","enter the radius \n");
        scanf("%f", &r);
        (*f[ choice ])( r );
         printf( "%s", "Enter a number 0 for Circumference 1 for Circle Area 2 for Sphere Volume or 3 to end : " );
         scanf( "%u", &choice );
     } // end while

     puts( "Program execution completed." );


    return 0;
}
void function1( float a ){
    printf("Circumference = %.2f \n", 2*3.14*a);

}

void function2( float b ){
    printf("Area = %.2f \n", 3.14*b*b);

}

void function3( float c ){
     printf("sphere volume = %.2f \n", (4/3)*3.14*c*c*c);


}
