class Solution
{
public:
    int climbStairs(int n)
    {
        int curr = 0;
        if (n <= 2)
        {
            return n;
        }
        int onestep = 1, twostep = 2;
        for (int i = 0; i < n - 2; i++)
        {
            curr = onestep + twostep;
            onestep = twostep;
            twostep = curr;
        }
        return curr;
    }
};