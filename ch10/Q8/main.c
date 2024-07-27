#include <stdio.h>
#include <stdlib.h>

union integer {
    char c;
    short s;
    int i;
    long b;


};
int main()
{
   union integer i;
    /*puts("enter 4 values the first one is character ");
    scanf("%c",i.c);
    scanf("%hi",i.s);
    scanf("%d",i.i);
    scanf("%ld",i.b);*/
    i.c ='k';
    i.s =5;
    i.i=15;
    i.b=98;

    printf("your values are %c %hi %d %ld\n",i.c,i.s,i.i,i.b);

    return 0;
}
