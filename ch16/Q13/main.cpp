#include <iostream>

using namespace std;

class Invoise{
private:
    string partNumber;
    string partDescribtion;
    int Q_purshased;
    int price;

public:
    Invoise(string n, string d, int p, int q){
        setPartDescribtion(d);
        setPartNumber(n);
        setPrice(p);
        setQuantity(q);

    }
    void setPartNumber(string n){
        partNumber = n;
    }


    void setPartDescribtion(string des){
        partDescribtion = des;
    }

    void setQuantity(int q){
        if(q<0){
                q=0;
            cout<<"Error Quantity must be greater than ZERO\n";
        }
        Q_purshased =q;

    }

    void setPrice (int p){
        if(p<0){
            p=0;
            cout<<"Error price must be greater than ZERO\n";
        }
        price =p;

    }

    string getDescribtion(){
        return partDescribtion;
    }

    string getpartNumber(){
        return partNumber;
    }

    int getPrice(){
        return price;
    }

    int getQuantity(){
        return Q_purshased;
    }

    int getInvoiceAmount(){
        return Q_purshased*price;

    }


};
int main()
{
    Invoise i("btats23","vegetables",2,10);
    cout<<"The part number is "<<i.getpartNumber()<<"\nthe describtion is "<< i.getDescribtion()<<"\nthe Quantity is "<<i.getQuantity()<<endl;
    cout<<"with price : "<< i.getPrice()<<endl;
    cout<<"the invoise amount = "<<i.getInvoiceAmount();

    return 0;
}
