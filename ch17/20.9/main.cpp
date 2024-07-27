#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Package
{
	private:
		string sender_name;
		string sender_address;
		string sender_city;
		string sender_state;
		string sender_ZIP;

		string recipient_name;
		string recipient_address;
		string recipient_city;
		string recipient_state;
		string recipient_ZIP;

		double weight;
		double costperounce;
public:

		Package(string sender_n, string sender_addr, string sender_c,
                 string sender_s, string sender_Z, string recipient_n, string recipient_addr,
                string recipient_c,string recipient_s, string recipient_Z, double wei, double cost){

                    sender_name = sender_n;
                    sender_address = sender_addr;
                    sender_city = sender_c;
                    sender_state = sender_s;
                    sender_ZIP = sender_Z;

                    recipient_name = recipient_n;
                     recipient_address = recipient_addr;
                    recipient_city = recipient_c;
                    recipient_state = recipient_s;
                    recipient_ZIP = recipient_Z;

                if(wei > 0.0 && cost > 0.0)
                {
                    weight = wei;
                    costperounce = cost;
                }
                else
                {
                    weight = 0.0;
                    costperounce = 0.0;
                }
                }

		 void setSenderName(string sender_n){
		     sender_name = sender_n;
		 }
        string getSenderName(){
            return sender_name;

        }

    void setSenderAddress(string sender_addr){
        sender_address = sender_addr;

    }
    string getSenderAddress(){
        return sender_address;
    }

    void setSenderCity(string sender_c){
        sender_city = sender_c;

    }
    string getSendCity(){
        return sender_city;

    }

    void setSenderState(string sender_s)
    {
        sender_state = sender_s;
    }
    string getSenderState()
    {
        return sender_state;
    }

    void setSenderZIP(string sender_Z)
    {
        sender_ZIP = sender_Z;
    }
    string getsender_ZIP()
    {
        return sender_ZIP;
    }

    void SetReceiptName(string recipient_n)
    {
        recipient_name = recipient_n;
    }
    string getReceiptName()
    {
        return recipient_name;
    }

    void setReceiptAddress(string recipient_addr)
    {
        recipient_address = recipient_addr;
    }
    string getRecieptAdress()
    {
        return recipient_address;
    }

    void setReceiptCity(string recipient_c)
    {
        recipient_city = recipient_c;
    }
    string getRecieptCity()
    {
        return recipient_city;
    }

    void setReceiptState(string recipient_s)
    {
        recipient_state = recipient_s;
    }
    string getReceiptState()
    {
        return recipient_state;
    }

    void setReceiptZIP(string recipient_Z)
    {
        recipient_ZIP = recipient_Z;
    }
    string getReceiptZIP()
    {
        return recipient_ZIP;
    }

    void setWeight(double w)
    {
         weight = (w < 0.0 ) ? 0.0 : w;
    }
    double getWeight()
    {
        return weight;
    }

    void setCostPerounce(double cost)
    {
        costperounce = ( cost < 0.0) ? 0.0 : cost;
    }

    double getCostPerounce()
    {
        return costperounce;
    }

    double calculateCost()
    {
        double result;

        result = weight * costperounce;

        return result;
    }
};





class TwoDayPackage : public Package
{
	private:
		double two_day_delivery_fee;
	public:
		TwoDayPackage(string sender_n, string sender_addr, string
                        sender_c, string sender_s, string sender_Z, string recipient_n,
                        string recipient_addr,string recipient_c,string recipient_s,
                        string recipient_Z,double wei, double cost, double delivery_fee):Package(sender_n, sender_addr, sender_c, sender_s, sender_Z,
                                                                        recipient_n, recipient_addr, recipient_c, recipient_s, recipient_Z,wei,cost){

                        setTwoDayDeliveryFee(delivery_fee);

                        }

		double getTwoDayDelivery_fee()
        {
            return two_day_delivery_fee;
        }
		void setTwoDayDeliveryFee(double delivery_fee)
        {
            two_day_delivery_fee = delivery_fee;
        }

		double calculateCost()
        {
            double result;
            result = Package::calculateCost() + two_day_delivery_fee;
            return result;
        }

};



class OvernightPackage : public Package
{
private:
		double overnight_delivery_fee;
public:

    OvernightPackage(string sender_n, string sender_addr, string sender_c,
    string sender_s, string sender_Z, string recipient_n, string recipient_addr,
    string recipient_c,string recipient_s, string recipient_Z, double wei,
    double cost, double delivery_fee):Package(sender_n, sender_addr, sender_c, sender_s, sender_Z, recipient_n,
                                                recipient_addr, recipient_c, recipient_s, recipient_Z,wei,cost){
	    setOverNightDeliveryFee(delivery_fee);
        }

    double getOverNightDeliveryFee()
    {
        return overnight_delivery_fee;
    }
    void setOverNightDeliveryFee(double delivery_fee)
    {
        overnight_delivery_fee = delivery_fee;
    }

    double calculateCost()
    {
        double result;
        result =  (getCostPerounce() + overnight_delivery_fee) * getWeight();
        return result;
    }

};



int main(int argc, char *argv[])
{
	OvernightPackage item1("Rofida Gamal", "123 btats", "Zaied",
                        "Ahmed", "89754", "Mohammed", "123 bent street", "meow", "meow",
                        "87540", 12.00, 1.50, 1.10);
	TwoDayPackage item2("NOURA", "987 1st Street", "Giza",
                        "7elwan", "87654", "RRR", "833 7izbona", "jakki", "Egypt",
                        "98763", 18.00, 1.05, 8.00);

    cout << "Overnight Package\n";
    cout << "Sender  " << item1.getSenderName()<< endl;
    cout<< item1.getSenderAddress() << endl;
    cout << item1.getSendCity() << " " << item1.getSenderState() << " " << item1.getsender_ZIP() <<endl<<endl;
    cout << "Recipient " << item1.getReceiptName()<< endl;
    cout << item1.getSenderAddress() << endl;
    cout <<  item1.getRecieptCity() << " " <<item1.getReceiptState() << " " << item1.getReceiptZIP() << endl<<endl;
    cout << "Cost  $ " <<item1.calculateCost() <<endl;

    cout << "2 Day package\n";
    cout << "Sender " << item2.getSenderName()<< endl;
    cout << item2.getSenderAddress() <<endl;
    cout<< item2.getSendCity() << " " << item2.getSenderState() << " " << item2.getsender_ZIP() << endl<<endl;

    cout << "Recipient " << item2.getReceiptName()<< endl;
    cout << item2.getSenderAddress() << endl;
    cout << item2.getRecieptCity() << " " << item2.getReceiptState() << " " << item2.getReceiptZIP() << endl;
    cout << "Cost $ " <<item2.calculateCost()<<endl;

	return 0;
}
