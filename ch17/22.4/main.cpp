#include <iostream>

using namespace std;
template< typename T >

int printArray( const T * const arr,int s,int lowSubscript,int highSubscript ){
  if (lowSubscript < 0 || highSubscript >= s ||lowSubscript == highSubscript){
    return 0;
    }
    int x=0;
    for(int i=lowSubscript;i<=highSubscript;i++){
        cout<<arr[i]<<" ";
        ++x;
    }
    cout<<endl;
    return x;

}
int main()
{
     int aSize = 5;
     int bSize = 7;
     int cSize = 6;
     int a[ aSize ] = { 1, 2, 3, 4, 5 };
     double b[ bSize ] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
     char c[ cSize ] = "Rofida";
     cout << "Array a contains:" << endl;
     cout<<printArray( a, aSize ,3,4)<< endl;
     cout << "Array b contains:" << endl;
     cout<<printArray( b, bSize,2,6 )<<endl;
     cout << "Array c contains:" << endl;
     cout<<printArray( c, cSize ,3,5)<<endl;
    return 0;
}
