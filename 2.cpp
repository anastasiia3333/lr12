#include <iostream>
using namespace std;

template <typename T> int find (T object, T *list, int size) 
{
    for (int i = 0; i < size; i++) 
    {
        if (list[i] == object) return i;
    }
    return -1;
}

int main ()
{
	int arrInt[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(arrInt) / sizeof(arrInt[0]);
    cout << "Index of 6 in int array: " << find(6, arrInt, intSize) << endl;

    double arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleSize = sizeof(arrDouble) / sizeof(arrDouble[0]);
    cout << "Index of 4.4 in double array: " << find(4.4, arrDouble, doubleSize) << endl;

    char arrChar[] = {'a', 'b', 'c', 'd', 'e'};
    int charSize = sizeof(arrChar) / sizeof(arrChar[0]);
    cout << "Index of 'c' in char array: " << find('c', arrChar, charSize) << endl;
}