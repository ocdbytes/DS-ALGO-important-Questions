// count the number of 1's in binary representation of the number
// Concept n&n-1 will have all the digits same except the rightmost set bit
// So we will perform & operations till we have n&n-1 as zero
#include <iostream>
using namespace std;

int countNumberOf1(int n, int count)
{
    if (n == 0)
    {
        return count;
    }
    return countNumberOf1(n & n - 1, count + 1);
}

int main()
{
    // 0111
    cout << countNumberOf1(7, 0) << endl;
    return 0;
}