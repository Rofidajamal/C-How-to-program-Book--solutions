#include <iostream>

using namespace std;

int main()
{
   int sumOfSquare=0;
   int squareOfsum =0;
   int dif=0;
    for (int i =1;i<=100;i++){
            squareOfsum+=i;
            sumOfSquare+=i*i;
    }

    dif = (squareOfsum*squareOfsum) - sumOfSquare ;
    cout<<dif;
    return 0;
}
