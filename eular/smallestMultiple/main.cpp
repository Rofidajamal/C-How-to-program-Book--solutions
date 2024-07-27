#include <iostream>

using namespace std;

int main()
{
    int flag = 0;

    long n =2520;
    for(n; ;n+=20){
        flag = 0;
        for(int i =1;i<20;i++)
        {

            if (!(n%i==0)){
                flag =1;
                break;
            }

        }
        if (flag ==0)
        {
            cout<<n<<endl;
            break;
        }
    }
    return 0;
}
