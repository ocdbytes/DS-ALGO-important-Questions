#include <iostream>
using namespace std;

int kadane(int arr[], int n)
{
    int maxSum = INT_MIN;
    int currentSum;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int wrapsum;
    int nonwrapsum;
    nonwrapsum = kadane(arr, n);
    int totalsum = 0;
    for (int i = 0; i < n; i++)
    {
        totalsum += arr[i];
        arr[i] = -arr[i];
    }
    wrapsum = totalsum + nonwrapsum;

    cout << wrapsum;
    return 0;
}