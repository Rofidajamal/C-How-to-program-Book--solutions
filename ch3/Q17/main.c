#include <stdio.h>
#include <stdlib.h>

int main()
{
    int acc_num =0;
    float  beginning_balance, total_charges, total_credits, credit_limit, balance;
    beginning_balance = total_charges = total_credits = credit_limit = balance=0.0;


    printf("Enter account number (-1 to end): ");
    scanf("%d",&acc_num);
    while(acc_num !=-1)
    {
        printf("Enter beginning balance: ");
        scanf("%f",&beginning_balance);
        printf("Enter total charges: ");
        scanf("%f",&total_charges);
        printf("Enter total credits: ");
        scanf("%f",&total_credits);
        printf("Enter credit limit:");
        scanf("%f",&credit_limit);
        printf("\nAccount: %d",acc_num);
        printf("\nCredit limit: %.2f",credit_limit);

        balance = beginning_balance + total_charges - total_credits;
        printf("\nBalance\t: %.2f",balance);
        if(balance > credit_limit)
            printf("\nCredit Limit Exceeded.");

        printf("\nEnter account number (-1 to end): ");
        scanf("%d",&acc_num);


    }
    return 0;
}
