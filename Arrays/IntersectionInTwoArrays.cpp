#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    // Simple approach we will just mark the intersected element
    // and the continue with the loop and break the inner one.
    // our complexity is more thanm expected
    // * To solve this we can compare the numbers
    // * if number is large then we can break the loop because both the arrays are in sorted order
    /*
    for (int i = 0; i< n;i++){
        int element = arr1[i];
        for(int j = 0; j < m;j++){
            if(element < arr2[j]){
                break;
            }
            if(element == arr2[j]){
                ans.push_back(element);
                arr2[j] = -1;
                break;
            }
        }
    }
    */
    // Now also time limit exceeded
    // * what if we check the arr1[i] values and compare it with arr2[i]
    // * Now if arr1[i] < arr2[j] then i++
    // * if arr1[i] == arr2[j] then j++, i++ and print the value
    // * if arr1[i] > arr2[j] then j++
    vector<int> ans;

    // 2-pointer approach

    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return ans;
}

int main()
{
    return 0;
}