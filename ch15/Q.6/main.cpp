#include <iostream>

using namespace std;
int Tbyvalue (int n){
    return n *= 3;
}

void Tbyref(int& n){
     n *= 3;

}
int main()
{
    int c = 5;
    cout << "the value before triple by value " << c<<endl;
    cout<<"the value after triple by value "<<Tbyvalue(c)<<endl;
    cout << "the value before triple by ref " << c<<endl;
     Tbyref(c);
    cout<<"the value after triple by ref " << c<<endl;

    return 0;
}
