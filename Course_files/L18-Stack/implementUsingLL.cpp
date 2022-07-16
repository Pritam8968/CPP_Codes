#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node *top = NULL;
void push(int val)
{
    node *newNode = new node(val);
    if (newNode == NULL)
    {
        cout << "Stack Overflow" << endl;
        return;
    }
    newNode->next = top;
    top = newNode;
}
void pop()
{
    if (top == NULL)
    {
        cout << "Stack Underflow" << endl;
        return;
    }
    node *deleteNode = top;
    top = top->next;
    delete deleteNode;
}
bool isEmpty()
{
    return top == NULL;
}
int peek()
{
    if (!isEmpty())
    {
        return top->data;
    }
    else
    {
        exit(1);
    }
}
int main(int argc, char const *argv[])
{
    push(11);
    push(22);
    push(33);
    push(44);
    cout << peek() << endl;
    pop();
    pop();
    pop();
    cout << peek() << endl;
    pop();
    cout << peek() << endl;
    pop();
    return 0;
}
