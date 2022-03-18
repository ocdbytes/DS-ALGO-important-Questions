#include <iostream>
using namespace std;

int findUnique(int *arr, int size)
{
    // Write your code here
    /*
    One solution is brute force other one is :
    XOR : if we do xor of two numbers then we will get 0
    2 ^ 2 = 0
    Approach:
    arr[5] = {1,2,1,3,2}
    XOR of all elements : 1^2^1^3^2
    all duplicate elements will cancel themselves and at the end we will get:
    3
    */
    int ans = 0;

    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    return 0;
}