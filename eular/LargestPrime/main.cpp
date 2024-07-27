#include <iostream>

using namespace std;

int main()
{
    long long n =600851475143;
    long i=2;

    for(;i*i<n;i++)
    {
       while(n%i==0){
            n/=i;
       }
    }

    cout<<n<<endl;
    return 0;
}
