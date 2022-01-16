#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtTail(Node *&head, int val)
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
    n->prev = temp;
}

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}

void deletion(Node *&head, int position)
{
    Node *temp = head;
    int count = 1;

    if (position == 1)
    {
        Node *todelete = head;
        head = head->next;
        head->prev = NULL;

        delete todelete;
        return;
    }

    while (temp != NULL && count != position)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
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

int main()
{
    int n;
    cout << "Enter the number of elements : ";
    cin >> n;

    Node *head = NULL;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        insertAtTail(head, a);
    }
    display(head);
    insertAtHead(head, 6);
    insertAtHead(head, 7);
    display(head);
    deletion(head, 2);
    display(head);
    return 0;
}