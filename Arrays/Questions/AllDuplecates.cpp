/*
https://leetcode.com/problems/find-all-duplicates-in-an-array/
*/
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        int freq[100001] = {0};
        for (int i = 0; i < nums.size(); i++)
        {
            freq[nums[i]]++;
        }

        vector<int> ans;
        for (int i = 0; i < 100001; i++)
            if (freq[i] > 1)
                ans.push_back(i);

        return ans;
    }
};

int main()
{
    return 0;
}