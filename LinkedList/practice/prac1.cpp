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

void addToHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
}

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

void addToPosition(Node *&head, int val, int pos)
{
    if (pos == 0)
    {
        Node *n = new Node(val);
        n->next = head;
        head = n;
        cout << ":" << endl;
        return;
    }
    int i = 1;
    Node *temp = head;
    Node *n = new Node(val);
    while (temp != NULL)
    {
        if (i == pos)
        {
            Node *prevNode = temp;
            Node *nextNode = temp->next;
            prevNode->next = n;
            n->next = nextNode;
            break;
        }
        i++;
        temp = temp->next;
    }
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
    Node *head = new Node(1);
    Node *first = new Node(2);
    Node *second = new Node(3);
    head->next = first;
    first->next = second;

    display(head);
    addToPosition(head, 12, 2);
    display(head);
    // addToPosition(head, 100, 2);
    addToHead(head, 100);
    display(head);
    return 0;
}