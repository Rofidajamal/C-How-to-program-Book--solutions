#include <stdio.h>
#include <stdlib.h>

int main()
{
   float acc_limit,balance,newLimit;
   int accNumber;

   printf("enter the account number: ");
   scanf("%d",&accNumber);

   printf("Enter the account limit and your balance in order : ");
   scanf("%f%f",&acc_limit,&balance);

   newLimit = acc_limit /2.0;
   if(balance>newLimit)
        printf("balance exceed the new credit limits.");
    return 0;
}
