#include <iostream>

using namespace std;
inline float circleArea(float r){
    return 3.14*r*r;

}
int main()
{
    float r;
    cout << "Enter the radius of the circle !" << endl;
    cin>>r;

    cout<<"Area = "<<circleArea(r)<<endl;

    return 0;
}
