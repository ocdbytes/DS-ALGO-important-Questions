#include <iostream>
using namespace std;

int noOfBreakingDays(int arr[], int n)
{
    int count = 0;
    int max = -1;
    if (arr[0] > arr[1])
    {
        count++;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i - 1] > max)
        {
            max = arr[i - 1];
        }
        if (arr[i] > max && arr[i] > arr[i + 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n;
    cout << "Enter the number of days : ";
    cin >> n;

    int arr[n];
    cout << "Enter the visitors day by day : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << noOfBreakingDays(arr, n) << endl;
}