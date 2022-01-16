#include <iostream>
#include <math.h>
#include <string>
using namespace std;
#define n 100

class stack
{
    int *arr;
    int top;

public:
    stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int val)
    {
        if (top == n - 1)
        {
            cout << "stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "stack not filled" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return 0;
        }
        return arr[top];
    }
    bool empty()
    {
        return top == -1;
    }
    void display()
    {
        for (int i = 0; i <= top; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int prefixEvaluation(string s)
{
    stack st;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op1 = st.Top();
            st.pop();
            int op2 = st.Top();
            st.pop();
            int res;
            switch (s[i])
            {
            case '+':
                res = op1 + op2;
                st.push(res);
                break;
            case '-':
                res = op1 - op2;
                st.push(res);
                break;
            case '*':
                res = op1 * op2;
                st.push(res);
                break;
            case '/':
                res = op1 / op2;
                st.push(res);
                break;
            case '^':
                res = pow(op1, op2);
                st.push(res);
                break;
            default:
                break;
            }
        }
    }
    return st.Top();
}

int main()
{
    cout << prefixEvaluation("-+49+56") << endl;
    return 0;
}