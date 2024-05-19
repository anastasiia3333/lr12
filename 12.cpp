#include <iostream>
using namespace std;

template <typename T> T my_abs(T x)
{
	return x < 0 ? -x : x;
}

int main ()
{
	cout << "Absolute value of int number: " << my_abs(-5) << endl;
	cout << "Absolute value of double number: " << my_abs(1.8) << endl;

	return 0; 
}