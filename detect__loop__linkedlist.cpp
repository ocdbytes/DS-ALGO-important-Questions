#include <iostream>
#include <string>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to check if the linked list has a loop.
    // If there will be a loop both the pointers will be pointing at the same node during iteration
    bool detectLoop(Node *head)
    {
        Node *start = head;
        Node *end = head;

        while (start && end && end->next)
        {
            start = start->next;
            end = end->next->next;
            if (start == end)
            {
                return true;
            }
        }
        return false;
    }
};