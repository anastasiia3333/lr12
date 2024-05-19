#include <iostream>
using namespace std;
#define SIZE 10
 
template <class StackType> class Stack
{
    StackType stck[SIZE]; // holds the stack
    int tos;              // index of top of stack
public:
    void init() { tos = 0; };  // initialize stack
    void push(StackType obj); // push object on stack
    StackType pop();         // pop object from stack
};

template <class StackType> void Stack<StackType>::push(StackType obj)
{
    if (tos == SIZE)
    {
        cout << "stack is full";
        return;
    }
    stck[tos] = obj;
    tos++;
}

template <class StackType> StackType Stack<StackType>::pop()
{
    if (tos == 0)
    {
        cout << "Stack is empty";
        return 0; 
    }
    tos--;
    return stck[tos];
}
 
template <class QueueType> class Queue
{
    QueueType queue[SIZE]; 
    int tos;    
    int bos;          
public:
    void init() { tos = 0; bos = -1;};  
    void push(QueueType obj); 
    QueueType pop();         
};
template <class QueueType>
void Queue<QueueType>::push(QueueType obj)
{
    if (tos == SIZE)
    {
        cout << "Queue is full";
        return;
    }
    queue[tos] = obj;
    tos++;
}
 
template <class QueueType> QueueType Queue<QueueType>::pop()
{
    bos++;
    if (bos == tos)
    {
        cout << "Queue is empty";
        return 0; 
    }
    return queue[bos];
}
 
int main()
{
    Stack<int> s;
    Queue<char> q;
 
    s.init();
    q.init();
 
    s.push(7);
    s.push(8);
    s.push(9);
 
    q.push('k');
    q.push('l');
    q.push('m');
 
    for (int i = 0; i < 3; i++)
    {
        cout << "S pop:" << s.pop() << endl;
    }
 
    for (int i = 0; i < 3; i++)
    {
        cout << "Q pop:" << q.pop() << endl;
    }
 
    return 0;
}
