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
void makeCircle(node *&head, int pos) // Creating a circle in LL
{
    node *temp = head, *start;
    int count = 1;
    while (temp->next != NULL) // going to the last of the LL and marking the start of the circle
    {
        temp = temp->next;
        count++;
        if (count == pos) // marking
            start = temp;
    }
    temp->next = start; // linking to form a circle
}
bool checkCircle(node *&head)
{
    node *fastptr, *slowptr;  // two pointers
    fastptr = slowptr = head; // starting from head
    while (fastptr != NULL && fastptr->next != NULL)
    // if fastptr or fastptr->next is NULL we cant go next to it
    {
        slowptr = slowptr->next;       // going by one step
        fastptr = fastptr->next->next; // going by two steps
        if (fastptr == slowptr)        // meeting point
            return true;
    }
    return false;
}
void removeCircle(node *&head)
{
    node *fastptr, *slowptr;
    fastptr = slowptr = head;
    do
    {
        slowptr = slowptr->next;
        fastptr = fastptr->next->next;
    } while (fastptr != slowptr);          // until the meeting point found
    fastptr = head;                        // restarting the journey of the fastptr from the head
    while (fastptr->next != slowptr->next) // point where the circle starts
    {
        // but this time they both go by one step
        fastptr = fastptr->next;
        slowptr = slowptr->next;
    }
    slowptr->next = NULL; // detaching the circle
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
    insertAtTail(head, 7);
    insertAtTail(head, 8);
    insertAtTail(head, 9);
    display(head);
    cout << checkCircle(head) << endl;
    makeCircle(head, 4);
    cout << checkCircle(head) << endl;
    removeCircle(head);
    cout << checkCircle(head) << endl;
    display(head);
    return 0;
}
