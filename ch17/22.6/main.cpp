#include <iostream>
using namespace std;


class Ay7aga{
private :
    int value;
public:
    Ay7aga(int value){
        this->value = value;
    }
    void setValue(int value){
        this->value = value;

    }
    double getValue(){
        return value;
    }

    bool operator == (Ay7aga val )
    {
        return value ==val.value;
    }
};

template< typename T >
bool isEqualeTo(const T arg1,const T arg2){
    return arg1==arg2;
}

template <typename t>
bool isEqualToC( t arg1, t arg2){
    return arg1.getValue()==arg2.getValue();
}




int main()
{
    Ay7aga obj1(3),obj2(2);
    cout<<"class test with function "<<((isEqualToC(obj1,obj2))? "TRUE" : "False" )<<endl;
    cout<<"class test with == "<<((obj1 == obj2)? "TRUE" : "False" )<<endl;
    int a=5,b=5;
    cout <<"int test:"<<((isEqualeTo(a,b))? "TRUE" : "False")<<endl;
    double x=2.2 ,y=9.2;
    cout <<"double test :"<<((isEqualeTo(x,y))? "TRUE" : "False") <<endl;
    char c1='a',c2='d';
    cout <<"character test:"<<((isEqualeTo(c1,c2))? "TRUE" : "False")<<endl;
    return 0;
}
