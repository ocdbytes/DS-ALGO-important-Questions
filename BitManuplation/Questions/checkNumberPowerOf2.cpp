// Check if a number is a power of 2 or not
// Concept : if number is a power of two the n & n-1 will be 0
#include <iostream>
using namespace std;

bool checkPowerOf2(int n)
{
    if (n == 0)
    {
        return true;
    }
    if ((n & n - 1) == 0)
    {
        return true;
    }
    return false;
}

int main()
{
    cout << checkPowerOf2(16) << endl;
    return 0;
}