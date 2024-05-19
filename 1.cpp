#include <iostream>
using namespace std;

template <class X> X min(X &a, X &b)
{
	return a < b ? a : b;
}

int main ()
{
	cout << "Minimum between 3 and 4 is " << min(3, 4) << endl;
	cout << "Minimum between 'a' and 'c' is " << min('c', 'a') << endl;

    return 0;
}