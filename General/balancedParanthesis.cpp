class Solution
{
public:
    bool isValid(string s)
    {
        if (s.length() == 1)
        {
            return false;
        }
        stack<char> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                st.push(s[i]);
            }
            else
            {
                if (st.empty())
                {
                    return false;
                }
                char chr = st.top();
                char current = s[i];
                st.pop();
                switch (current)
                {
                case ')':
                    if (chr != '(')
                    {
                        return false;
                    }
                    break;
                case ']':
                    if (chr != '[')
                    {
                        return false;
                    }
                    break;
                case '}':
                    if (chr != '{')
                    {
                        return false;
                    }
                    break;
                default:
                    break;
                }
            }
        }
        if (st.empty())
            return true;
        return false;
    }
};