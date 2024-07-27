#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade;
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts( "Enter the letter grades." );
    puts( "Enter the EOF character to end input." );

    while ( ( grade=getchar()) != EOF) {
        if(grade == 'A' || grade == 'a')
            aCount +=1;
        else if(grade == 'B' || grade == 'b')
            bCount+=1;
        else if(grade == 'C' || grade == 'c')
            cCount+=1;
        else if (grade == 'D' || grade == 'd')
            dCount +=1;
        else if (grade == 'F' || grade == 'f')
            fCount+=1;
        else if (grade == ' ' || grade == '\n' ||grade == '\t')
            continue;
        else
        {
           printf( "%s", "Incorrect letter grade entered." );
           puts( " Enter a new grade." );
        }

    }

    puts( "\nTotals for each letter grade are:" );
    printf( "A: %u\n", aCount );
    printf( "B: %u\n", bCount );
    printf( "C: %u\n", cCount );
    printf( "D: %u\n", dCount );
    printf( "F: %u\n", fCount );

    return 0;
}
