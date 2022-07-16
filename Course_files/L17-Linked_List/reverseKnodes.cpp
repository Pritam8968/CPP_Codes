#include <iostream>
using namespace std;
// node class definition
class node
{
public:
    int data;
    node *next;
    // Node constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    head = newNode;
    cout << "Node inserted\n";
}
void insertAtTail(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        cout << "Node inserted\n";
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << "Node inserted\n";
}
node *reverseKNodes(node *&head, int k)
{
    node *prevptr = NULL, *currptr = head, *nextptr;
    int count = 0;
    while (count < k && currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
        head->next = reverseKNodes(nextptr, k);
    return prevptr;
}
void display(node *head)
{
    if (head == NULL)
    {
        cout << "Empty linked list\n";
        return;
    }
    // for safety we are using a temp iterator. We could use the head as an iterator as it's not called by reference
    node *temp = head;
    cout << "HEAD -> ";
    while (temp != 0)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}
int main(int argc, char const *argv[])
{
    int k = 2; // number of nodes to be reversed
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    node *newHead = reverseKNodes(head, k);
    display(newHead);
    return 0;
}
