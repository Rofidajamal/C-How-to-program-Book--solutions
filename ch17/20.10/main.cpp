#include <iostream>
using namespace std;

class Account{
private:
    double balance;
public:
    Account(double b){
        setBalance(b);

    }
    void setBalance(double b){
        if(b<0){
            cout<<"Invalid balance amount it should be greater than or equal ZERO\n";
            balance =0.0;
        }
        else
            balance =b;
    }

    void credit (double amount){
        balance += amount;
    }

    void debit(double deb){
        if (deb> balance){
            cout<<"Debit amount exceeded account balance."<<endl;
        }
        else
            balance -= deb;
    }

    bool debit(){
        double amount;
        cout<<"enter the amount of debit \n";
        cin>> amount;
        if (amount> balance){
            cout<<"Debit amount exceeded account balance."<<endl;
            return false;
        }
        else{
            balance -= amount;
            return true;
        }


    }

    double getBalance (){
        return balance;
    }

};
class SavingsAccount :public Account{
private:
    double interest_rate;
public:
    SavingsAccount(double balance, double rate):Account(balance){
        interest_rate = rate;
    }

    double calculateInterest (){
        return interest_rate * getBalance();
    }

};

class CheckingAccount : public Account{
private:
    double fee_charged_per_transaction;
public:
    CheckingAccount(double balance, double fee):Account(balance){
        fee_charged_per_transaction = fee;
    }

    void credit(){
        double amount;
        cout<<"enter the amount to add to balance\n";
        cin>>amount;
        Account::credit(amount);
        if(getBalance() >= fee_charged_per_transaction ){
            double temp = getBalance();
            temp -= fee_charged_per_transaction;
            setBalance(temp);
        }
        else
            cout<<"Not enough balance to accommodate transaction fee\n";
    }

    void debit(){
        if(Account::debit()){
            if(getBalance() >= fee_charged_per_transaction ){
            double temp = getBalance();
            temp -= fee_charged_per_transaction;
            setBalance(temp);
        }
        else
            cout<<"Not enough balance to accommodate transaction fee\n";
        }

    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
