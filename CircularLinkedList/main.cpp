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

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    if (head == NULL)
    {
        n->next = n;
        head = n;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
    head = n;
}

void insertAtTail(Node *&head, int val)
{
    Node *n = new Node(val);

    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->next = head;
}

void deletion(Node *&head, int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        Node *todelete = head;
        temp->next = head->next;
        head = head->next;

        delete todelete;
        return;
    }
    int count = 1;
    while (count != pos - 1)
    {
        temp = temp->next;
        count++;
    }
    Node *todelete = temp->next;
    temp->next = temp->next->next;
}

void display(Node *head)
{
    Node *temp = head;
    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    display(head);
    insertAtHead(head, 6);
    display(head);
    deletion(head, 1);
    display(head);
    return 0;
}