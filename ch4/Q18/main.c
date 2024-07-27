#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    for(int i =5 ; i>0 ;i--)
    {
        printf("enter a number between 1 and 30 : ");
        scanf("%d",&n);
        for(;n>0;n--)
            printf("%s","*");
        printf("\n");
    }

  return 0;
}
