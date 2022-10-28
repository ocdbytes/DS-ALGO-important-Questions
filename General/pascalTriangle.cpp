class Solution
{
public:
    vector<vector<int> > generate(int numRows)
    {
        vector<vector<int> > ans;
        vector<int> v;

        if (numRows >= 1)
        {
            v.push_back(1);
            ans.push_back(v);
        }

        if (numRows >= 2)
        {
            v.push_back(1);
            ans.push_back(v);
        }

        vector<int> temp = v;

        for (int i = 0; i < numRows - 2; i++)
        {
            vector<int> t;
            temp.insert(temp.begin(), 0);
            temp.insert(temp.end(), 0);
            int l = 0;
            int r = 1;
            // for(int k = 0; k < temp.size();k++){
            //     cout << temp[k] << end
            // }
            for (int j = 0; j < temp.size() - 1; j++)
            {
                t.push_back(temp[l] + temp[r]);
                l++;
                r++;
            }
            ans.push_back(t);
            temp = t;
        }

        return ans;
    }
};