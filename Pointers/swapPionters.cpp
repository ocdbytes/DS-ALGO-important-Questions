#include <iostream>
using namespace std;

void incArr(int *arr)
{
    for (int i = 0; i <= sizeof(*arr); i++)
    {
        *(arr + i) += 1;
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    int *adrA = &a;
    int *adrB = &b;
    swap(adrA, adrB);
    cout << a << " " << b << endl;

    int arr[5] = {10, 20, 30, 40, 50};
    incArr(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    incArr(arr);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}