 #include <stdio.h>
 #include <ctype.h>

  int main( void )
 {
    int c; // character input by user
    printf( "%s", "Enter a character: " );
    c = getchar();
        // test each function of the character-handling library
     printf("\n\a the ASCII numeric value of the entered character %c: %d \n\n\a ", c, c);
     printf( "isdigit( \'%c\' ) = %d\n\a", c, isdigit( c ) );
     printf( "isalpha( \'%c\' ) = %d\n\a", c, isalpha( c ) );
     printf( "isalnum( \'%c\' ) = %d\n\a", c, isalnum( c ) );
     printf( "isxdigit( \'%c\' ) = %d\n\a", c, isxdigit( c ) );
     printf( "islower( \'%c\' ) = %d\n\a", c, islower( c ) );
     printf( "isupper( \'%c\' ) = %d\n\a", c, isupper( c ) );
     printf( "tolower( \'%c\' ) = %d\n\a", c, tolower( c ) );
     printf( "toupper( \'%c\' ) = %d\n\a", c, toupper( c ) );
     printf( "isspace( \'%c\' ) = %d\n\a", c, isspace( c ) );
     printf( "iscntrl( \'%c\' ) = %d\n\a", c, iscntrl( c ) );
     printf( "ispunct( \'%c\' ) = %d\n\a", c, ispunct( c ) );
     printf( "isprint( \'%c\' ) = %d\n\a", c, isprint( c ) );
     printf( "isgraph( \'%c\' ) = %d\n\a", c, isgraph( c ) );
    return 0;
 } // end main
