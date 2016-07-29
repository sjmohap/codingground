#include<iostream>
using namespace std;
#define _MAX_STACK_SIZE 15
class StackArr
{
    public:
    
    int store[_MAX_STACK_SIZE];
    int top;
    StackArr()
    {
        top = -1;
    }
    
    void push(int data);
    int pop();
    int peek();
    bool isFull();
    bool isEmpty();
}

bool StackArr::isFull()
{
    if(top == _MAX_STACK_SIZE-1)
    return true;
    
    return false;
}

bool StackArr::isEmpty()
{
    if(top == -1)
    return true;
    
    return false;
}

void StackArr::push(int data)
{
    if(!isFull())
    store[++top] = data;
    else
    cout << "Stack already full " << endl;
}

int StackArr::pop()
{
    if(!isEmpty())
    return store[--top];
    else
    cout << "Stack is Empty " << endl;
    
}
    int StackArr::peek()
    {
        
    }