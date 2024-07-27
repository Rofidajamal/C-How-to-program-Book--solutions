#include <iostream>

using namespace std;
bool isPlind(long int num){

    int digit, rev = 0;
    long int n;
    n = num;
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);


     if (n == rev)
         return 1;
     else
         return 0;


}
int main()
{
    long int largest=-1;
    long int prod =1;
    bool plind ;

    for(int i =100;i<=999; i++){
        for(int k =100;k<=999;k++){
                prod = i*k;
                plind = isPlind(prod);
                if(plind == 1)
                    if(prod> largest )
                        largest = prod;

        }
    }
    if(largest != -1)
        cout<<largest;
    return 0;
}
