/*
Given a large number N, write a program to count the ways to break it into three whole numbers such that they sum up to the original number.

Input: N = 3
Output: 10
Explaination: The ways are
0 + 0 + 3 = 3
0 + 3 + 0 = 3
3 + 0 + 0 = 3
0 + 1 + 2 = 3
0 + 2 + 1 = 3
1 + 0 + 2 = 3
1 + 2 + 0 = 3
2 + 0 + 1 = 3
2 + 1 + 0 = 3
1 + 1 + 1 = 3

Stars and Bars Technique
https://cp-algorithms.com/combinatorics/stars_and_bars.html
*/
#include <iostream>
using namespace std;

class Solution
{
public:
    long long countWays(long long N)
    {
        // code here
        long long w = ((N + 2) * (N + 1)) / 2;
        return w;
    }
};

int main()
{
    return 0;
}