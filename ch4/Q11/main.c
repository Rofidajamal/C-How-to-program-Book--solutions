#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =0,min =99999, n;
    printf("enter the number of integers : ");
    scanf("%d",&i);
    for(;i>0;i--){
        printf("enter an integer : ");
        scanf("%d",&n);
        if(n < min)
            min = n;
    }
    printf("min : %d",min);
    return 0;
}
