// https://www.codingninjas.com/codestudio/problems/sort-0-1-2_631055?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTab=1
#include <iostream>
using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void sort012(int *arr, int n)
{
    //   Write your code here
    int left = 0;
    int right = n - 1;
    int middle = 0;
    while (middle <= right)
    {
        if (arr[middle] == 0 && middle <= right)
        {
            swap(arr[middle], arr[left]);
            middle++;
            left++;
        }
        if (arr[middle] == 1 && middle <= right)
        {
            middle++;
        }
        if (arr[middle] == 2 && middle <= right)
        {
            swap(arr[middle], arr[right]);
            right--;
        }
    }
}