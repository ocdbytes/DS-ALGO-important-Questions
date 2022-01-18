/*
Given two linked list of size N1 and N2 respectively of distinct elements, your task is to complete the function countPairs(), which returns the count of all pairs from both lists whose sum is equal to the given value X.

Input:
L1 = 1->2->3->4->5->6
L2 = 11->12->13
X = 15
Output: 3
Explanation: There are 3 pairs that
add up to 15 : (4,11) , (3,12) and (2,13)

*/

#include <iostream>
#include <bits/stdc++.h>
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
    // your task is to complete this function
    int countPairs(struct Node *head1, struct Node *head2, int x)
    {
        // Code here
        int count = 0;
        unordered_set<int> u2;
        Node *temp2 = head2;
        Node *temp1 = head1;

        while (temp2 != NULL)
        {
            u2.insert(temp2->data);
            temp2 = temp2->next;
        }

        while (temp1 != NULL)
        {
            if (u2.find((x - temp1->data)) != u2.end())
                count++;

            temp1 = temp1->next;
        }

        return count;
    }
};