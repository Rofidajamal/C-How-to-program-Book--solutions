#include <stdio.h>
#include <stdlib.h>

void function1( float a, float b );
void function2( float a, float b );
void function3( float a, float b );
void function4( float a, float b );

int main()
{
    void (*f[ 4 ])( float, float ) = { function1, function2, function3, function4 };

     size_t choice; // variable to hold user's choice

     printf( "%s", "Enter a number 0 to 3 or 4 to end : " );
     scanf( "%u", &choice );
     float n1=0;
     float n2 = 0;

     // process user's choice
     while ( choice >= 0 && choice <= 3 ) {
        printf("%s","enter the first number \n");
        scanf("%f", &n1);
        printf("%s","enter the second number \n");
        scanf("%f", &n2);
        (*f[ choice ])( n1, n2 );

         printf( "%s", "Enter a number 0 for Circumference 1 for Circle Area 2 for Sphere Volume or 3 to end : " );
         scanf( "%u", &choice );
     } // end while

     puts( "Program execution completed." );


    return 0;
}
void function1( float a, float b ){
    printf("sum = %.2f \n", a+b);

}

void function2( float c, float d ){
    printf("subtraction = %.2f \n", c-d);

}

void function3( float e, float f ){
     printf("multiplication = %.2f \n", e*f);

}

void function4( float j, float k ){
    if(k ==0){
        printf("%s","UNDEFINED you must enter any number except ZERO \n");
    }
    else{
        printf("multiplication = %.2f \n", j/k);
    }
}


