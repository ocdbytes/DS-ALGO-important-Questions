//Arrays Challenge-First Repeating Element
#include <iostream>
using namespace std;

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

int findFirstRepeating(int arr[], int n, int max)
{
    int minIndex = INT_MAX;
    int tempArr[max + 1];
    for (int i = 0; i < max + 1; i++)
    {
        tempArr[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (tempArr[arr[i]] != -1)
        {
            minIndex = tempArr[arr[i]];
        }
        else
        {
            tempArr[arr[i]] = i;
        }
    }
    // printArray(arr, n);
    return minIndex;
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    int maxEle = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maxEle)
            (maxEle = arr[i]);
    }
    cout << findFirstRepeating(arr, n, maxEle) << endl;
    return 0;
}