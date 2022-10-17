class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        vector<int> word_starts;
        bool flag = false;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != ' ' && !flag)
            {
                word_starts.push_back(i);
                flag = true;
            }
            else if (s[i] == ' ' && flag)
            {
                flag = false;
            }
        }

        int last_word_index = word_starts[word_starts.size() - 1];
        int length = 0;

        for (int i = last_word_index; i < s.length(); i++)
        {
            if (s[i] != ' ')
            {
                length++;
            }
        }

        return length;
    }
};