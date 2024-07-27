#include <iostream>

using namespace std;

#include <iostream>
#include <iomanip>


using namespace std;

class Array
{
    private:
	int r;
	int c;
	int *ptr;


public:

	Array( int r, int c )
	{
		if(r<0 || c<0){
            throw invalid_argument("invalid size");
		}
		ptr = new int[ (r*c) ];
		this->r = r;
		this->c = c;

		for ( int i = 0; i < r*c; i++)
			ptr[ i ] = 0;
	}

	Array( const Array &arrayToCopy )
	{
	    this->r = arrayToCopy.r;
	    this->c = arrayToCopy.c;
		ptr = new int[ (r*c) ];

		for ( int i = 0; i < r*c; i++)
			ptr[ i ] = arrayToCopy.ptr[ i ];
	}

	~Array()
	{
		delete [] ptr;
	}


	const Array &operator=( const Array &right )
	{
		if ( &right != this )
		{
			if ( (r*c) != (right.r *right.c) )
				delete [] ptr;
            this->r = right.r;
            this->c = right.c;
            ptr = new int[ (r*c) ];


			for ( int i = 0; i < r*c; i++ )
				ptr[ i ] = right.ptr[ i ];
		}

		return *this;
	}

	bool operator==( const Array &right ) const
	{
		if ( (r*c) != (right.r * right.c) )
			return false;

		for ( int i = 0; i < r*c; i++ )
			if ( ptr[i] != right.ptr[ i ] )
				return false;

		return true;
	}

	bool operator!=( const Array &right ) const
	{
		return ! ( *this == right );
	}

	int &operator[]( int subscript )
	{
		if ( subscript < 0 || subscript >= size )
		{
			cerr << "\nError: Subscript " << subscript
				<< " out of range" << endl;
			exit( 1 );
		}

		return ptr[ subscript ];
	}

	int operator[]( int subscript ) const
	{
		if ( subscript < 0 || subscript >= size )
		{
			cerr << "\nError: Subscript " << subscript
				<< " out of range" << endl;
			exit( 1 );
		}

		return ptr[ subscript ];
	}

	friend ostream &operator<<( ostream &, const Array & );
	friend istream &operator>>( istream &, Array & );


};


istream &operator>>( istream &input, Array &a )
{
	for ( int i = 0; i < a.size; i++ )
		input >> a.ptr[ i ];

	return input;
}

ostream &operator<<( ostream &output, const Array &a )
{
	int i;

	for ( i = 0; i < a.size; i++ )
	{
		output << setw( 12 ) << a.ptr[ i ];

		if ( ( i + 1 ) % 4 == 0 )
			output << endl;
	}

	if ( i % 4 != 0 )
		output << endl;

	return output;
}

int main()
{
	Array integers1( 7 );
	Array integers2;

	cout << "Size of Array integers1 is "
		<< integers1.getSize()
		<< "\nArray after initialization:\n" << integers1;

	cout << "\nSize of Array integers2 is "
		<< integers2.getSize()
		<< "\nArray after initialization:\n" << integers2;

	cout << "\nEnter 17 integers:" << endl;
	cin >> integers1 >> integers2;

	cout << "\nAfter input, the Arrays contain:\n"
		<< "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	cout << "\nEvaluating: integers1 != integers2" << endl;

	if ( integers1 != integers2 )
		cout << "integers1 and integers2 are not equal" << endl;

	Array integers3( integers1 );

	cout << "\nSize of Array integers3 is "
		<< integers3.getSize()
		<< "\nArray after initialization:\n" << integers3;

	cout << "\nAssigning integers2 to integers1:" << endl;
	integers1 = integers2;

	cout << "integers1:\n" << integers1
		<< "integers2:\n" << integers2;

	cout << "\nEvaluating: integers1 == integers2" << endl;

	if ( integers1 == integers2 )
		cout << "integers1 and integers2 are equal" << endl;

	cout << "\nintegers1[ 5 ] is " << integers1[5];

	cout << "\n\nAssigning 1000 to integers1[5]" << endl;
	integers1[ 15 ] = 1000; // Error: out of range

	return 0;
}
