#include <iostream>
using namespace std;
    int fib(int n){
        if (n == 0)
            return 1;
        else if (n == 1)
            return 2;
        else
            return fib(n-1)+fib(n-2);
    }

int main (){
    int sum = 0;
    int n = 0;
    while (fib(n) <= 4000000){
        if (fib(n) % 2 == 0)
            sum += fib(n);
        n += 1;
    }
    cout<<sum;
    return 0;

}
