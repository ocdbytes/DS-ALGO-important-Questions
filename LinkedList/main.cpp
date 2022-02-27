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
}

void insertAtHead(Node *&head, int val)
{
    Node *n = new Node(val);
    Node *temp = head;
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

void middle(Node *head, int n)
{
    int count = (n + 1) / 2, i = 0;
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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        insertAtTail(head, a);
    }
    // middle(head, n);
    // int a;
    display(head);
    // scanf("%d", &a);
    // printf("%d", a);
    return 0;
}