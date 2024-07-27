#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0 , n=0, sum=0;
    printf("enter the number of integers: ");
    scanf("%d",&i);
    for(; i>0;i--){
        printf("Enter one integer : ");
        scanf("%d",&n);
        sum+=n;
    }
    printf("sum = %d",sum);

    return 0;
}
