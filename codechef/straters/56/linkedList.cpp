#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// Create A class node

class node
{
public:
    int data;
    node *next;

    // Node Class Constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// Insert Element At Tail

void insertAtTail(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

// Display All Element

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Insert At Head

void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}

// Seraching  At Linked List

bool Search(node *head, int key)
{
    node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
// Deletion, Delete A particular Element
void deletion(node *&head, int val)
{
    // For No Node present
    if (head == NULL)
    {
        return;
    }
    // For present only one node
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }
    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    // Avoid Memory Leak
}

node *reverse(node *&head)
{
    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;

    while (currptr != NULL)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr; // Because prevptr is new head at the end
}

node *RecursiveReverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = RecursiveReverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
}

// Corner Case When want to delete firts node
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;
    // Avoid Memory Leak
    delete todelete;
}
int main()
{

    node *head = NULL;
    insertAtTail(head, 12);
    insertAtTail(head, 178);
    insertAtTail(head, 1788);
    display(head);
    insertAtHead(head, 345);
    display(head);
    cout << Search(head, 178);

    return 0;
}
