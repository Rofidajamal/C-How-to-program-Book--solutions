#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("enter four numbers");
    char string[10]="";
    int sum =0;
    for(int i=0; i<4; i++){
        scanf("%s",string);
        sum += atoi(string);
    }
    printf("sum = %d",sum);
    return 0;
}
