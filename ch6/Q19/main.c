#include <stdio.h>
#include <stdlib.h>

int main()
{
    int freq[11]={0};
    for (int i=0;i<36000;i++){
        int rand1 = 1 + ( rand() % 6 );
        int rand2 =  1 + ( rand() % 6 );
            if(rand1 + rand2 == 2)
                ++freq[0];
            else if (rand1 + rand2 == 3)
                ++freq[1];
            else if (rand1 + rand2 == 4)
                ++freq[2];
            else if (rand1 + rand2 == 5)
                ++freq[3];
            else if (rand1 + rand2 == 6)
                ++freq[4];
            else if (rand1 + rand2 == 7)
                ++freq[5];
            else if (rand1 + rand2 == 8)
                ++freq[6];
            else if (rand1 + rand2 == 9)
                ++freq[7];
            else if (rand1 + rand2 == 10)
                ++freq[8];
            else if (rand1 + rand2 == 11)
                ++freq[9];
            else if (rand1 + rand2 == 12)
                ++freq[10];
    }
    for(int i =0;i<11;i++){
        printf("%d\t\t%d\n",i+2,freq[i]);
    }
    return 0;
}
