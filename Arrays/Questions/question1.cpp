//MAX TILL i
#include <iostream>
using namespace std;

void maxTillI(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int max = -19999999;
        for (int j = 0; j <= i; j++)
        {
            if (arr[j] > max)
            {
                max = arr[j];
            }
        }
        cout << max << " ";
    }
    cout << endl;
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
    maxTillI(arr, n);
    return 0;
}