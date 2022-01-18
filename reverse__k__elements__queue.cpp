/*
Given an integer K and a queue of integers, we need to reverse the order of the first K elements of the queue, leaving the other elements in the same relative order.
Input:
5 3
1 2 3 4 5

Output:
3 2 1 4 5
*/

#include <iostream>
#include <queue>
#include <stack>
using namespace std;

queue<int> modifyQueue(queue<int> q, int k)
{
    int size = q.size() - k;
    stack<int> s;
    // 1 2 3 4 5
    for (int i = 0; i < k; i++)
    {
        s.push(q.front());
        q.pop();
    }
    // q -> 4 5, s -> 1 2 3
    for (int i = 0; i < k; i++)
    {
        q.push(s.top());
        s.pop();
    }
    // q -> 4 5 3 2 1
    while (size--)
    {
        q.push(q.front());
        q.pop();
    }
    // q -> 3 2 1 4 5
    return q;
}