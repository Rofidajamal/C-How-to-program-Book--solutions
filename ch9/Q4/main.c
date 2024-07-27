#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hex ;
    int arr [9];
    int h,m,s;

    printf("%-15.8u",4000);
    scanf("%x",&hex);
    printf("%x\n",hex);
    printf("signed %d\t unsigned %u\n",-200,200);
    printf ( "%#x\n", 100 ) ;
    printf("%8s","enter a string: ");
    scanf("%8[^p]",arr);
    printf("%s",arr);
    printf("\n%09.3f\n",1.234);

    printf("%s","enter the time in this form h:m:s ");
    scanf("%*c%d%*c%d%*c%d",&h,&m,&s);
    printf("hours: %d\tminutes: %d\tseconds: %d\n",h,m,s);

    scanf("%[^\"]",arr);
    printf("%s",arr);


    printf("%s","\nenter the time in this form h:m:s ");
    scanf("%-d%-d%-d",&h,&m,&s);
    printf("\nhours: %d\tminutes: %d\tseconds: %d",h,m,s);




    return 0;
}
