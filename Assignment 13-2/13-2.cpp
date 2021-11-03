#include "Numbers.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{  
	Number n(5);
	n.setElement();
	n.printOut();

    cout << "Sum " << n.getSum() << endl;
	cout << "Size " << n.getSize() << endl;

	Number N(10);

	for( int i=0;i<10; i++)
    {
		N.setElement(i,i*10);
    }

	N.printOut();
}