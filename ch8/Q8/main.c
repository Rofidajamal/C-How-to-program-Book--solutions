#include <stdio.h>
#include <stdlib.h>

int main()
{
    puts("enter four numbers");
    char string[10]="";
    float sum =0;
    for(int i=0; i<4; i++){
        scanf("%s",string);
        sum += atof(string);
    }
    printf("sum = %.4f",sum);
    return 0;
}
