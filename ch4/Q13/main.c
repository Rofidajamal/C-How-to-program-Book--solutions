#include <stdio.h>
#include <stdlib.h>

int main()
{
       int product=1;
   for(int i=1; i<=15;i+=2 ){
        product*=i;
   }
   printf("product of odd numbers from 1 to 15 = %d",product);
    return 0;
}
