#include <iostream>
#include <map>
#include <vector>
using namespace std;

template <class T> T summary (T *list, int size) 
{
    float result = 0;
    for (int i = 0; i < size; i++) 
    {
        result += list[i];
    }
    return result;
}

int main() 
{
    int arrInt[] = {1, 2, 3, 4, 5};
    int intSize = sizeof(arrInt) / sizeof(arrInt[0]);    
    cout << "The summary of all elements in int array is: " << summary(arrInt, intSize) << endl;

    double arrDouble[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleSize = sizeof(arrDouble) / sizeof(arrDouble[0]);
    cout << "The summary of all elements in double array is: " << summary(arrDouble, doubleSize) << endl;

    return 0;
}
