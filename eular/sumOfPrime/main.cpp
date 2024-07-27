#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int flag =0;
    long long sum=0;
    for(long long i =2;i<2000000;i++){
            flag =0;
        for(long long j =2;j<=i;j++){
            if(i!=j && i%j == 0){
                flag =1;
                break;
            }
        }
        if(flag == 0)
            sum+=i;


    }
    cout<<sum<<endl;
    return 0;
}
