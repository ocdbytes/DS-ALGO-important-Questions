#include <iostream>
using namespace std;
// Declaring the class node
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

void insertAtTail(Node *&head, int val)
{
    // declaring a new node
    Node *n = new Node(val);

    if (head == NULL)
    {
        head = n;
        return;
    }
    // creating a temp head
    Node *temp = head;
    // travesing till the end
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // assigning the next variable as the address on n to the last one
    temp->next = n;
}

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    n->next = head;
    head = n;
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

bool search(Node *head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void middle(Node *&head, int n)
{
    int count = (n + 1) / 2;
    int i = 1;

    Node *temp = head;
    while (temp != NULL && i < count)
    {
        temp = temp->next;
        i++;
    }
    cout << temp->data << endl;
}

int main()
{
    Node *head = NULL;
    int n;
    cout << "Enter the number of elements you want to add : ";
    cin >> n;
    cout << "Enter the elements : ";
    int t = n;
    while (t--)
    {
        int element;
        cin >> element;
        insertAtTail(head, element);
    }
    // insertAtHead(head, 100);
    // cout << search(head, 2) << endl;
    display(head);
    middle(head, n);
    return 0;
}