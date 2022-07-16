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
void deleteAtHead(node *&head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    node *toDelete = head;
    head = head->next;
    delete toDelete;
    cout << "Node deleted\n";
}
void deleteNode(node *&head, int val)
{
    if (head == NULL)
    {
        cout << "Linked list is empty\n";
        return;
    }
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val) // searching the node right before the node to be deleted
    {
        temp = temp->next;
    }
    node *toDelete = temp->next;   // storing the node to be deleted
    temp->next = temp->next->next; // changing the links
    delete toDelete;               // deallocating node
    cout << "Node deleted\n";
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
int search(node *head, int key)
{
    int idx = -1;
    bool flag = false;
    node *temp = head;
    while (temp->next != NULL)
    {
        idx++;
        if (temp->data == key)
        {
            flag = true;
            break;
        }
        temp = temp->next;
    }
    if (flag)
        return idx;
    else
        return -1;
}
int main(int argc, char const *argv[])
{
    node *head = NULL;
    display(head);
    insertAtTail(head, 1);
    display(head);
    insertAtTail(head, 2);
    display(head);
    insertAtTail(head, 3);
    display(head);
    insertAtHead(head, 4);
    display(head);
    insertAtTail(head, 5);
    display(head);
    cout << search(head, 4) << endl;
    deleteNode(head, 3);
    display(head);
    deleteAtHead(head);
    display(head);
    return 0;
}
