#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cumulative sum approach
    int cumsum[n + 1];
    cumsum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cumsum[i] = arr[i - 1] + cumsum[i - 1];
    }
    int maxSum = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (int j = 0; j < i; j++)
        {
            sum = cumsum[i] - cumsum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout << maxSum << endl;
    return 0;
}