class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)
    {
        string ans = "";
        int size = strs.size();

        // Sorting
        sort(strs.begin(), strs.end());
        for (int i = 0; i < strs[0].size(); i++)
        {
            if (strs[0][i] != strs[size - 1][i])
            {
                break;
            }
            ans += strs[0][i];
        }

        return ans;
    }
};