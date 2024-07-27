#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[10];
    char s2 [10];
    int n =0;
    printf("enter the first string: ");
    scanf("%s",s1);
    printf("enter the second string: ");
    scanf("%s",s2);
    printf("enter the number of characters to compare: ");
    scanf("%d",&n);

    printf("the result = %d",strcmp(s1, s2, n));



    return 0;
}
