#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum=0;
   for(int i=2; i<=32;i+=2 ){
        sum+=i;
   }
   printf("sum of even numbers from 2 to 32 = %d",sum);
    return 0;
}
