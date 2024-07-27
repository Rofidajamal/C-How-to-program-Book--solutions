#ifndef DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#define DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
#include <iostream>
using namespace std;

class DoubleSubscriptedArray
{
    friend ostream &operator<<( ostream &,  DoubleSubscriptedArray & );
    friend istream &operator>>( istream &, DoubleSubscriptedArray & );
public:
    DoubleSubscriptedArray(int ,int );
    ~DoubleSubscriptedArray();
    int getSize() const;
    DoubleSubscriptedArray &operator=( DoubleSubscriptedArray&);
    bool operator==(const DoubleSubscriptedArray&)const;
    bool operator !=(const DoubleSubscriptedArray &right)
    {
        return!(*this==right);
    }
    int &operator()(int,int);
private:
    int *ptr;
    int row;
    int col;
};

#endif // DOUBLESUBSCRIPTEDARRAY_H_INCLUDED
