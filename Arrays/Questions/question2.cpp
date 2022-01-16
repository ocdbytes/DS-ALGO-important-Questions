#include <iostream>
using namespace std;

void sumOfSubArrays(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int sum = 0;
        for (int j = i; j <= n - 1; j++)
        {
            sum += arr[j];
            cout << sum << endl;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;

    int arr[n];
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sumOfSubArrays(arr, n);
    return 0;
}