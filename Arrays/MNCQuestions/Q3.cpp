//Arrays Challenge - Smallest Positive Missing Number
#include <iostream>
using namespace std;

int missingInt(int arr[], int n, int max)
{
    bool arrBool[max];
    for (int i = 0; i < max; i++)
        arrBool[i] = false;
    for (int i = 0; i < n; i++)
        if (arr[i] >= 0)
            arrBool[arr[i]] = true;
    for (int i = 0; i < max; i++)
        if (arrBool[i] == false)
            return i;
    return -1;
}

int main()
{
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int max = INT_MIN;
    int arr[n];
    cout << "Enter the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > max)
            max = arr[i];
    }
    cout << missingInt(arr, n, max) << endl;
    return 0;
}