#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[20]={0};
    int n =0;
    int f =0;

    for (int i =0; i<20;i++){
            f =0;
        scanf("%d",&num[i]);
        if(num[i]>=10 && num[i]<=100){
            for(int j=0;j<i;j++){
                if(num[i]==num[j] && i!=j)
                {
                    f =1;
                    break;

                }
            }
            if (f ==0){
                printf("%d \n",num[i]);
            }
        }
    }



    return 0;

}
