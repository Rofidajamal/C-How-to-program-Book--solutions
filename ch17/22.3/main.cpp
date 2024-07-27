#include <iostream>
using namespace std;

template<typename T>

void selectionsort(T arr[],int s){
    int x;
    for(int i=0 ;i<s-1;i++){
        x=i;
        for(int j=i+1 ; j<s;j++){
            if(arr[j]<arr[x]){
                x=j;
            }
        }

    T temp =arr[i];
    arr[i]=arr[x];
    arr[x]=temp;
    }
}
template<typename T>
void printArray(T arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i] <<" ";
     }
     cout<<endl;
}

int main()
{
    const int s=6;
     int intarr[s]={4,6,3,5,1,2};
     float floatarr[]={4.4,6.2,3.1,5.2,5.3,1.2};
     cout << "Before sorting:" << endl;
     printArray(intarr, s);
     printArray(floatarr, s);
     selectionsort(intarr, s);
     selectionsort(floatarr, s);
      cout << "After sorting:" << endl;
     printArray(intarr, s);
     printArray(floatarr, s);

    return 0;
}
