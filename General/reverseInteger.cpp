// Given a signed 32 - bit integer x, return x with its digits reversed.If reversing x causes the value to go outside the signed 32 - bit integer range[-2^31, 2^31 - 1], then return 0.

#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)
    {
        int temp = abs(x);
        int new_num = 0;
        while (temp > 0)
        {
            int digit = temp % 10;
            if (new_num < INT_MIN / 10 || new_num > INT_MAX / 10)
            {
                return 0;
            }
            new_num = new_num * 10 + digit;
            temp /= 10;
        }
        if (x < 0)
        {
            new_num = -new_num;
        }
        return new_num;
    }
};