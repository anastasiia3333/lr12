#include <iostream>
#include <utility> 
#include <stdexcept> 
using namespace std;
#define SIZE 10

template <class T1, class T2> class Stack
{
    pair<T1, T2> stck[SIZE]; 
    int tos;                     
public:
    Stack() : tos(0) {};          
    void push(T1 first, T2 second); 
    pair<T1, T2> pop();        
};

template <class T1, class T2> void Stack<T1, T2>::push(T1 first, T2 second)
{
    if (tos == SIZE)
    {
        throw overflow_error("Stack overflow: Cannot push, stack is full.");
    }
    stck[tos] = make_pair(first, second);
    tos++;
}

template <class T1, class T2> pair<T1, T2> Stack<T1, T2>::pop()
{
    if (tos == 0)
    {
        throw underflow_error("Stack underflow: Cannot pop, stack is empty.");
    }
    tos--;
    return stck[tos];
}

int main()
{
    Stack<int, char> s;
    try 
    {
        s.push(1, 'a');
        s.push(2, 'b');
        s.push(3, 'c');
        s.push(4, 'd'); 
        s.push(5, 'e'); 
    } catch (const exception& e) 
    {
        cout << e.what() << endl;
    }

    try 
    {
        for (int i = 0; i < 6; i++) 
        {
            pair<int, char> p = s.pop();
            cout << "Stack pop: " << p.first << ", " << p.second << endl;
        }
    } catch (const exception& e) 
    {
        cout << e.what() << endl;
    }

    return 0;
}
