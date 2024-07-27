#include <iostream>

using namespace std;

class Employee{
private:
    string firstName;
    string lastName;
    int monthlySalary;
public:
    Employee(string fN, string lN, int MS){
        setFirstName(fN);
        setLastNmae(lN);
        setMonthlySalary(MS);
    }

    void setFirstName(string fN){
        firstName = fN;
    }

    void setLastNmae(string lN){
        lastName = lN;
    }

    void setMonthlySalary(int MS){
        if (MS<0){
            cout<<"ERROR salary must be greater than ZERO\n";
            MS=0;
        }
        monthlySalary = MS;

    }

    string getFirstName(){
        return firstName;
    }

    string getLastName(){
        return lastName;
    }

    int getSalary(){
        return monthlySalary;
    }

    void display(){
        cout<<"name: "<<getFirstName()<<" "<<getLastName()<<"\nSalary: "<<getSalary();

    }

};

int main()
{
    Employee e1("Ahmed","Gamal",2500);
    Employee e2 ("Omar","Muhammed",-3);

    e1.display();
    e2.display();

    return 0;
}
