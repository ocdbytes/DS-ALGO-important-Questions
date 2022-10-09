class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> m({{'I', 1}, {'X', 10}, {'C', 100}, {'M', 1000}, {'V', 5}, {'L', 50}, {'D', 500}});
        int length = s.length();
        int i;
        int num = m[s[length - 1]];
        for (i = length - 2; i >= 0; i--)
        {
            // cout << s[i] << " " << s[i+1] << endl;
            if (m[s[i + 1]] > m[s[i]])
            {
                num -= m[s[i]];
            }
            else
            {
                num += m[s[i]];
            }
        }
        return num;
    }
};