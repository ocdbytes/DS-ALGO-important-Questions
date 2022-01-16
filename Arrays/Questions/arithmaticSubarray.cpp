#include <iostream>
using namespace std;

bool isArithmatic(int arr[], int n)
{
    int sub = arr[1] - arr[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] != sub)
        {
            return false;
        }
    }
    return true;
}

int arithmaticSubarray(int arr[], int n)
{
    int max_length = 0;
    for (int i = 0; i <= n - 1; i++)
    {
        for (int j = i + 1; j <= n - 1; j++)
        {
            int length = j - i + 1;
            int array[length];
            int s = 0;
            for (int k = i; k <= j; k++)
            {
                array[s] = arr[k];
                s++;
            }
            if (isArithmatic(array, length) == true)
            {
                if (length > max_length)
                {
                    max_length = length;
                }
            }
        }
    }
    return max_length;
}

//efficient answer
// int efficientArithmaticSubarray(int arr[], int n)
// {
//     int max_length = 0;
//     int diff = arr[1] - arr[0];
//     int ans = 2;
//     int curr = 2;
//     int j = 2;
//     while (j < n)
//     {
//         if (arr[j] - arr[j - 1] == diff)
//         {
//             curr++;
//         }
//         else
//         {
//             diff = arr[j] - arr[j - 1];
//             curr = 2;
//         }
//         ans = max(ans, curr);
//         j++;
//     }
//     return ans;
// }

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
    cout << arithmaticSubarray(arr, n) << endl;
    return 0;
}