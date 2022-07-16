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
void insertAtTail(node *&head, int val)
{
    node *newNode = new node(val);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
/**
 * Iterative approach
 */
node *reverseLL(node *&head)
{
    node *previousPtr = NULL, *currentPtr = head, *nextPtr;
    while (currentPtr != NULL)
    {
        // we are changing the nextptr first because there is no next to NULL in case of the last node
        nextPtr = currentPtr->next;
        // reversing the link
        currentPtr->next = previousPtr;
        // moving the pointers by one step
        previousPtr = currentPtr;
        currentPtr = nextPtr;
    }
    return previousPtr;
}
/**
 * Recursive Approach
 */
node *reverseLLRecursion(node *&head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *newHead = reverseLLRecursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
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
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);
    node *revHead = reverseLL(head);
    display(revHead);
    node *newHead = reverseLLRecursion(revHead);
    display(newHead);
    return 0;
}
