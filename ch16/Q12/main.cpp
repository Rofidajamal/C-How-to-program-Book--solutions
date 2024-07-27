#include <iostream>

using namespace std;
class Acount{
private:
    int  accountBalance;

public:
    Acount(int acc){
        setBalance(acc);

    }

    void setBalance (int b ){
        if(b<0){

            accountBalance = 0;
            cout<<"ERROR, the balance should be greater than or equal ZERO\n";
        }
        else
            accountBalance = b;
    }

    int getBalance(){
        return accountBalance;

    }

    void debit(int amount){
        if(amount> getBalance()){
            cout<<"Debit amount exceeded account balance.\n";
        }
        else{
                setBalance((accountBalance-amount));

        }


    }



};
int main()
{
    Acount a(50);
    a.debit(3);
    cout<<a.getBalance();
    return 0;
}
