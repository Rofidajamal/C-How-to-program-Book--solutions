#include <iostream>

using namespace std;

template <class T>
T Max(T a , T b){
    if(a>b)
        return a ;
    else
        return b;


}
int main()
{
    cout<<"max between integers "<<Max(3,50)<<endl;
     cout<<"max between doubles "<<Max(3.5,1.5)<<endl;
      cout<<"max between characters "<<Max('a','c')<<endl;

    return 0;
}
