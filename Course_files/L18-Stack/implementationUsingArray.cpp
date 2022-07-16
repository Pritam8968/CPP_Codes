#include <iostream>
using namespace std;
class Stack
{
    int *arr;
    int topIndex = -1;
    int size;

public:
    Stack(int n)
    {
        size = n;
        arr = new int[size];
    }
    void push(int element)
    {
        if (topIndex == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        topIndex++;
        arr[topIndex] = element;
    }
    void pop()
    {
        if (topIndex == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        topIndex--;
    }
    int top()
    {
        if (topIndex == -1)
        {
            cout << "The stack is empty" << endl;
            return -1;
        }
        return arr[topIndex];
    }
    bool empty()
    {
        return topIndex == -1;
    }
};
int main(int argc, char const *argv[])
{
    Stack st = Stack(5);
    cout << st.empty() << endl;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    cout << st.empty() << endl;
    cout << st.top() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() << endl;
    return 0;
}
