#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    int a = 1 << pos; // this will give us the number with bit 1 at position pos
    // cout << a << endl;
    return (n & a) ? 1 : 0;
}

int setBit(int n, int pos)
{
    int a = 1 << pos;
    return (a | n);
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos);
    return (mask & n);
}

int updateBit(int n, int pos, int val)
{
    int mask = ~(1 << pos);
    n = n & mask;
    return (n | (val << pos));
}

int main()
{
    cout << getBit(6, 3) << endl;
    cout << setBit(5, 1) << endl;
    return 0;
}

/*
Get Bit
-------
n = 0101 = 5
bit at position 2 ?
- step 1 : form a number where only 1 is there on position i (i = 2 in our case)
            1<<i = 0100
- step 2 : take an AND opration of 0100 & 0101
            0100 & 0101 = 0100
- step 3 : Now if AND result is 0 then bit at i is 0 otherwise it is 1

Set Bit
-------
n = 0101 = 5
set bit at position i (i = 1)
- step 1 : form a number where only 1 is there on position i (i = 1 in our case)
            1<<i = 0010
- step 2 : take an OR operation of 0010 and 0101
            0010 | 0101 = 0111
- step 3 : We get our result

Clear Bit
---------
n = 0101 = 5
clear bit at position i (i = 2)
- step 1 : form a number where only 1 is in that positiojn we clear our bit off (i = 2 in our case)
            1 << i = 0100
- step 2 : take one's compliment of the formed number
            ~0100 = 1011
- step 3 : take an AND operation of complimented and original number
            1011 & 0101 = 0001
            0001 is our answer

Update Bit
----------
n = 0101
update our first position to 1
step 1 : we will clear the bit at our position given
        1<<i = 0010
        ~0010 = 1101
        0101 & 1101 = 0101
step 2 : now will set our bit
        1<<i = 0010
        0101 | 0010 = 0111
*/