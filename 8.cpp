#include <iostream>
#include <vector>
using namespace std;

template <typename T> class BubbleSort {
public:
    static void sort(vector<T>& array) 
    {
        bool swapped;
        int n = array.size();
        do 
        {
            swapped = false;
            for (int i = 1; i < n; i++) 
            {
                if (array[i - 1] > array[i]) 
                {
                    swap(array[i - 1], array[i]);
                    swapped = true;
                }
            }
            n--; // Оптимізація: кожен проход зменшує кількість елементів для перевірки
        } while (swapped);
    }
};

int main() {
    vector<int> intArray = {60, 34, 15, 1, 76, 69, 31};
    BubbleSort<int>::sort(intArray);
    cout << "Array (int) sorted using Bubble sort: ";
    for (int num : intArray) 
    {
        cout << num << " ";
    }
    cout << endl;

    vector<double> doubleArray = {60.7, 34.9, 15.1, 12.5, 22.3, 69.2, 9.9};
    BubbleSort<double>::sort(doubleArray);
    cout << "Array (double) sorted using Bubble sort: ";
    for (double num : doubleArray) 
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
