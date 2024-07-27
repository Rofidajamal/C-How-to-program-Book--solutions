#include <stdio.h>
#include <stdlib.h>

int main()
{

    int Freq [9] ={0};
    int salary;
    int res ;

    for(int i =0;i<9;i++){
         res =0;
        puts("Enter your salary : ");
        scanf("%d", &salary);
        res +=(200+ salary*0.09);
        switch (res) {
        case 200 ... 299:
            ++Freq[0];
            break;
        case 300 ... 399:
            ++Freq[1];S
            break;
        case 400 ... 499:
            ++Freq[2];
            break;
        case 500 ... 599:
            ++Freq[3];
            break;
        case 600 ... 699:
            ++Freq[4];
            break;
        case 700 ... 799:
            ++Freq[5];
            break;
        case 800 ... 899:
            ++Freq[6];
            break;
        case 900 ... 999:
            ++Freq[7];
            break;
        default:
            ++Freq[8];

        }
    }

    for(int i =0;i<9;i++){
        printf("%d\t",Freq[i]);
    }
    return 0;
}
