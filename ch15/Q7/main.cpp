#include <iostream>

using namespace std;

template <class T>
T Min(T a , T b){
    if(a<b)
        return a ;
    else
        return b;


}
int main()
{
    cout<<"min between integers "<<Min(3,50)<<endl;
     cout<<"min between doubles "<<Min(3.5,1.5)<<endl;
      cout<<"min between characters "<<Min('a','c')<<endl;

    return 0;
}
