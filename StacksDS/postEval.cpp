#include <iostream>
#include <stack>
#include <string>
#include <math.h>
using namespace std;

int postEvaluation(string s)
{
    stack<int> st;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            st.push(s[i] - '0');
        }
        else
        {
            int op2 = st.top();
            st.pop();
            int op1 = st.top();
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
    return st.top();
}
int main()
{
    cout << postEvaluation("46+2/5*7+") << endl;
    return 0;
}