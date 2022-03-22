#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > pairSum(vector<int> &arr, int s)
{
    // Write your code here.
    // What to do here
    /*
    int arr[5] = {1,2,4,5,3}
    piars of sum = 5
    - 1,4
    - 2,3

    Approach
    --------

    1. Brute force :
         for (i =0 -> n)
             for(j = i+1 -> n)
                 if(arr[i] + arr[j] == sum)
                     print(i,j)
                     break;
    */
    vector<vector<int> > ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    return 0;
}