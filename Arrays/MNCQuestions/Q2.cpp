//Arrays Challenge-Subarray with given sum
#include <iostream>
using namespace std;

int findSubarray(int arr[], int n, int sum)
{
    int start = 0;
    int end = 0;

    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = i; j < n; j++)
        {

            s += arr[j];
            if (s == sum)
            {
                start = i;
                end = j;
                cout << start + 1 << " " << end + 1 << endl;
                return 1;
            }
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int sum;
    cout << "Enter the sum you want to find out : ";
    cin >> sum;

    int arr[n];
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    findSubarray(arr, n, sum);
    return 0;
}