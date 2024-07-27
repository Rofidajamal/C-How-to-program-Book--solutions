#include <stdio.h>
#include <stdlib.h>

int main()
{
    //A
        for(int i =1;i<=10;i++){
        for(int j =0; j<i;j++)
            printf("%s","*");
        printf("\n");

    }

    printf("\n\n");

    //B
        for(int i =0;i<10;i++){
            for(int j =i; j<10;j++)
                printf("%s","*");
            printf("\n");

        }
        printf("\n\n");

    //C
        for(int i =10;i>=1;i--){
                for(int k = 10-i; k>0;k--)
                    printf(" ");
            for(int j =i; j>0;j--)
                printf("%s","*");
            printf("\n");}
        printf("\n\n");

    //D
        for(int i =1;i<=10;i++){
                for(int k = i-1; k<10;k++)
                    printf(" ");
            for(int j =0; j<i;j++)
                printf("%s","*");
            printf("\n");

        }



    return 0;
}
