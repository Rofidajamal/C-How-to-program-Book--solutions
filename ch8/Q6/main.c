#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s [100];
    printf("Enter a sentence \n");
    scanf("%99c",s);
    s[100]='\0';
    int i =0;
    printf("the sentence in lower case : ");
    while(s[i]!= NULL){
    printf("%c",tolower(s[i]));
    i++;
    }
    printf("\nthe sentence in upper case : ");

    i =0;
    while(s[i]!= NULL){
    printf("%c",toupper(s[i]));
    i++;
    }


    return 0;
}
