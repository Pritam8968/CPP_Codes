#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *newNode = new node(val);
    newNode->next = head;
    if (head != NULL)
        head->prev = newNode;
    head = newNode;
}
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }
    node *newNode = new node(val);
    node *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newNode;
    newNode->prev = temp;
}
void deleteAtHead(node *&head)
{
    if (head != NULL)
    {
        node *toDelete = head;
        head = head->next;
        head->prev = NULL;
        delete toDelete;
    }
}
void deleteNode(node *&head, int pos)
{
    if (pos == 1)
    {
        deleteAtHead(head);
        return;
    }
    int count = 1;
    node *temp = head;
    while (count != pos && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL) // for the last node
        temp->next->prev = temp->prev;
    delete temp;
}
void display(node *head)
{
    node *temp = head;
    cout << "NULL <- ";
    while (temp != NULL)
    {
        cout << temp->data;
        if (temp->next == NULL)
            cout << " -> ";
        else
            cout << " <==> ";
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
    insertAtTail(head, 5);
    insertAtTail(head, 6);
    display(head);
    deleteNode(head, 6);
    display(head);
    return 0;
}
