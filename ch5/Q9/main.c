#include <stdio.h>
#include <stdlib.h>

float calcCharges(float hours){
    float charges = 2.0;

    if(hours > 0){

       if(hours <= 3){
        return 2.0;
       }
       else if( hours <= 24 ) {
            while( hours > 3 ) {
                charges += .5;
                hours--;
                if( charges >= 10 )
                    charges = 10;
            }
            return charges;
        }
    }
}



int main()
{
    float h1, h2, h3, res1=0, res2=0, res3=0;

    for (int i =0; i<3;i++){
        printf("Enter the hours of customer %d ",i+1);
        if(i ==0)
           {
               scanf("%f",&h1);
               res1 =calcCharges(h1);
           }
        else if (i ==1)
            {
               scanf("%f",&h2);
               res2 =calcCharges(h2);
           }
        else{
            scanf("%f",&h3);
            res3 =calcCharges(h3);
        }

    }
    printf( "%s%10s%12s", "Car", "Hours", "Cost" );
    printf( "\n%d%12.1f%12.2f", 1, h1, res1);
    printf( "\n%d%12.1f%12.2f", 2, h2, res2 );
    printf( "\n%d%12.1f%12.2f", 3, h3, res3 );
    printf( "\n%s%8.1f%12.1f", "TOTAL", h1 + h2 + h3, res1 + res2 + res3 );

    return 0;
}
