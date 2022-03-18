#include <iostream>
using namespace std;
/*
Input : [1,2,3,4,5,6]
Output : [2,1,4,3,6,5]
*/
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i += 2)
    {
        if (i + 1 < 6)
        {
            swap(arr[i], arr[i + 1]);
        }
    }

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}