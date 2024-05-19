#include <iostream>
#include <map>
#include <vector>
using namespace std;

template <class T> T mostFrequentElement(const vector<T>& array) 
{
    map<T, int> frequencyMap;
    int maxCount = 0;
    T mostFrequent;

    for (const T& element : array) 
    {
        ++frequencyMap[element];
        if (frequencyMap[element] > maxCount) 
        { // Оновлюємо максимальну частоту та елемент, який найчастіше зустрічається
            maxCount = frequencyMap[element];
            mostFrequent = element;
        }
    }

    return mostFrequent;
}

int main() 
{
    vector<int> intArray = {2, 1, 4, 3, 2, 2, 3, 2};
    cout << "The most frequent element is: " << mostFrequentElement(intArray) << endl;

    vector<char> charArray = {'b', 'b', 'c', 'a', 'c', 'b', 'd'};
    cout << "The most frequent character is: " << mostFrequentElement(charArray) << endl;

    return 0;
}
