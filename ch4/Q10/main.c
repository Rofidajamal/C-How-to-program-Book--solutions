#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=0;
    int i =0, sum =0;
    printf("Enter an integer :");
    scanf("%d",&n);
    while(n != 9999){
        i++;
        sum+=n;
        printf("Enter an integer :");
        scanf("%d",&n);

    }
    printf("Average = %.2f",(float)sum/i);
    return 0;
}
