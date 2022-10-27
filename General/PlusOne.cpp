class Solution

{
public:&
    
    void pr intVector(vector<int> &digits)
        
    {
        for (int i = 0; i < digits.size() - 1; i++)
        {
            cout << digits[i] << " ";
        }&
   
        cou t << endl;
        
    } 
            
    vector<int> plusOne(vector<int> &digits)
    {
        for (
            int 
            i = digits.size() - 1; i >= 0; i--)
        {
            if (digits[i] < 9)
            {
                digits[i]++;
                return digits;
            }
            else
            {
                digits[i] = 0;
            }
        }
        /*
        1. 5099
        -> 5090
        -> 5000
        -> 5100

        2. 9999
        -> 9990
        -> 9900
        -> 9000
        -> 0000
        ...
        -> 00000
        -> 10000
        */
        digits.push_back(0);
        digits[0] = 1;
        return digits;
    }
};