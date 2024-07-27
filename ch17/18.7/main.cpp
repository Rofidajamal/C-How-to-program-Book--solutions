#include <iostream>

using namespace std;

class SavingsAccount{
private:
     static double annualInterestRate;
    double savingsBalance;
public:

    void setBalance(double bal)
    {
        savingsBalance = bal;
    }


    double calculateMonthInt()
    {
        double monthInt = 0;
        monthInt += savingsBalance*annualInterestRate / 12;
        return savingsBalance += monthInt;
    }

    void modifyInterestRate(double iRate)
    {
        annualInterestRate = iRate;
    }





};

//set the annualInterestRate to 0
double SavingsAccount::annualInterestRate = 0;


int main()
{

    SavingsAccount saver1, saver2;


    saver1.setBalance(2000.00);
    saver2.setBalance(3000.00);


    saver1.modifyInterestRate(0.03);

    //finding the balance in saver1 and saver2 account
    cout << "Balance of saver1 and saver2 on 3% interest Rate\n";
    cout << "Balance of saver1 = " << saver1.calculateMonthInt()<< endl;
    cout << "Balance of saver2 = " << saver2.calculateMonthInt() << endl << endl;
    //Setting annual interset 0.04 to static variable
    saver1.modifyInterestRate(0.04);
    cout << "Balance of saver1 and saver2 on 4% interest Rate\n";
    cout << "New Balance of saver1 = " << saver1.calculateMonthInt()<<endl;
    cout << "New Balance of saver2 = " << saver2.calculateMonthInt()<<endl;
    return 0;
}

