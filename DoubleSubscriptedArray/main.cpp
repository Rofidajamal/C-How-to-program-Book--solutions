#include <iostream>
#include"DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray d1(4,2);
    DoubleSubscriptedArray d2(4,2);
    cin>>d1(3,1);
    cout<<"first array after change"<<endl<<d1;
    d2=d1;

    cout<<"second array after copy"<<endl<<d2;
}
