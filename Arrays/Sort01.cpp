// Sort all the elements in array containing only  0's and 1's
// [0,0,1,1,0,0,1] -> [0,0,0,0,1,1,1]
#include <iostream>
using namespace std;

/*
Approach
--------

1. counting and pushing
-> count all the elements and push them according to the count

2. simply sort the array
-> Simply sort all the elements in the array using any sorting methods

3. Two Pointer approach
->  [0,1,0,1,1,0]
    i           j

    a[i] == 0 -> i++
    a[j] == 1 -> j--
    a[i] == 1 and a[j] == 0 and i < j -> swap(a[i],a[j])
*/

int main()
{
    int arr[6] = {0, 1, 0, 1, 1, 0};

    int i = 0;
    int j = 5;

    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    for (int k = 0; k < 6; k++)
    {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}