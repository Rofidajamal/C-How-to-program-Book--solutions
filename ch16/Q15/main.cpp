#include <iostream>

using namespace std;

class Date{
private:
    int year;
    int month;
    int day;

public:
    Date(int y, int m, int d){
        setYear(y);
        setDay(d);
        setMonth(m);
    }

    void setYear(int y){
        year = y;
    }

    void setMonth(int m){
        if(m<1 && m>12){
            cout<<"invalid month so month has been created as 1\n";
            m =1;
        }
        month = m;
    }

    void setDay(int d){
        day = d;
    }

    int getYear(){
        return year;
    }

    int getMonth(){
        return month;
    }

    int getDay(){
        return day;
    }

    void display(){
        cout<<"date: "<<getDay()<<"\\"<<getMonth()<<"\\"<<getYear()<<endl;
    }


};
int main()
{
    Date d(2008,8,4);
    d.display();
    return 0;
}
