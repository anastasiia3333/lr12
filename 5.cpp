#include <iostream>
using namespace std;

double divide(double a, double b)
{
	if (b == 0) 
		{
			throw "Invalid denominator!";
		}
	else 
		{
			double result =  a/b;
			cout << "The result of division is: " << result << endl;
        }
    return a / b;
};

int main ()
{
	double a, b;
	cout << "Enter a divisor: " << endl;
	cin >> a;
	cout << "Enter a denominator: " << endl;
	cin >> b;
    try {
        divide(a, b); 
    }
    catch (const char* m) {
        cerr << "Error: " << m << endl; 
    }

	return 0;
}