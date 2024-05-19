#include <iostream>
#include <utility> 
using namespace std;
#define SIZE 10

template <class T1, class T2> class Stack
{
    pair<T1, T2> stck[SIZE]; 
    int tos;                      
public:
    void init() { tos = 0; };  
    void push(T1 first, T2 second); 
    pair<T1, T2> pop();        
};

template <class T1, class T2> void Stack<T1, T2>::push(T1 first, T2 second)
{
    if (tos == SIZE)
    {
        cout << "Stack is full\n";
        return;
    }
    stck[tos] = make_pair(first, second);
    tos++;
}

template <class T1, class T2> pair<T1, T2> Stack<T1, T2>::pop()
{
    if (tos == 0)
    {
        cout << "Stack is empty\n";
        return make_pair(0, 0); 
    }
    tos--;
    return stck[tos];
}

int main()
{
    Stack<int, char> s; 
    s.init();
    s.push(1, 'a');
    s.push(2, 'b');
    s.push(3, 'c');
    for (int i = 0; i < 3; i++)
    {
        pair<int, char> p = s.pop();
        cout << "Stack pop: " << p.first << ", " << p.second << endl;
    }

    return 0;
}
