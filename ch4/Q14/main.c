#include <stdio.h>
#include <stdlib.h>

int main()
{
    int fac=1;
   for(int i=2; i<=5;i++ ){
        fac*=i;
   }
   printf("factorial of 5 = %d",fac);
    return 0;
}
