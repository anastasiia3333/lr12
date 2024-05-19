#include <iostream>
using namespace std;

template <class T> class Input 
{
public:
	T object;
	Input (string welcome_message, T min_value, T max_value)
	{
		while (1)
		{
			cout << welcome_message;
			cin >> object;
			if (object >= min_value && object <= max_value) break;
		    else cout << "Let's try again.\n";
		}
	}
};

int main()
{
	Input <int> numeric("Enter a number, if you exceed the limit, you will have to enter the number again: ", 1, 10);
	cout << numeric.object << endl;

	Input <char> alphabetic("\n\nEnter a letter, if you exceed the limit, you will have to enter the letter again: ", 'c', 'k');
	cout << alphabetic.object << endl;

	return 0;
}