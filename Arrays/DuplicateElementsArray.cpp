#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    // Write your code here
    // Bruteforce : Counting
    /*
Approach :
* First we will xor all the elements in the array and get our xor
* Then we will again do the xor with array second time
* This will result in duplicatin gthe elements and the duplicate number will become:
    X^X^X = 0^X = X
    Final answer will result in X (duplicate element)
    */
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    //     cout << ans << endl;

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    return 0;
}
