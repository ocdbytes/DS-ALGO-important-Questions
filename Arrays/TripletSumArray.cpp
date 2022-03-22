#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > findTriplets(vector<int> arr, int n, int K)
{
    // Write your code here.
    // simple approach : three loops
    vector<vector<int> > ans;
    int i = 0, j = 0, k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            for (k = j + 1; k < n; k++)
            {
                vector<int> temp;
                if (arr[i] + arr[j] + arr[k] == K)
                {
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    sort(temp.begin(), temp.end());
                    if (find(ans.begin(), ans.end(), temp) == ans.end())
                    {
                        ans.push_back(temp);
                    }
                }
            }
        }
    }
    return ans;
}

int main()
{
    return 0;
}