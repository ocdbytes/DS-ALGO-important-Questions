#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void addToTail(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void deletion(Node *&head, int val)
{
    if (head == NULL)
    {
        return;
    }
    if (head->next == NULL)
    {
        deleteHead(head);
        return;
    }
    Node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    Node *todelete = temp->next;
    temp->next = todelete->next;
    delete todelete;
}

void deleteHead(Node *&head)
{
    Node *todelete = head;
    head = head->next;
    delete todelete;
}

int main()
{
    Node *head = NULL;
    addToTail(head, 1);
    addToTail(head, 2);
    addToTail(head, 3);
    addToTail(head, 4);
    display(head);

    deletion(head, 4);
    display(head);

    return 0;
}