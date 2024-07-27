#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[10];
    char s2 [10];
    printf("enter the first string: ");
    scanf("%s",s1);
    printf("enter the second string: ");
    scanf("%s",s2);
    int x =0;
    x = strcmp(s1, s2);
    if(x==0)
        printf("\ntwo string are equal");
    else if(x < 0)
        printf("\nthe first string is less than the second one ");
    else
         printf("\nthe first string is greater than the second one ");



    return 0;
}
