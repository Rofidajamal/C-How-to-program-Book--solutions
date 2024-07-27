#include <stdio.h>
#include <stdlib.h>
int GCD(int x, int  y)
{
    int minx = x<y? x :y;
    for (int i = minx;i>0;i--){
        if(x%i==0 && y%i==0)
            return i;
    }
}
int main()
{
    int res = GCD(8,4);
    printf("%d",res);
    return 0;
}
