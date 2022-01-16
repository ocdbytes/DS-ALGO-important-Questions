// Linked list implementation
#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queue
{
    node *front;
    node *back;

public:
    queue()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void dequeue()
    {
        if (front == NULL)
        {
            cout << "queue underflow" << endl;
            return;
        }
        node *todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "no element in queue" << endl;
            return;
        }
        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    // implement same as queue
    return 0;
}