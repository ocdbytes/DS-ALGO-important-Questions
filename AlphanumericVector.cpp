/*
Geek's Paint Shop is one of the famous shop in Geekland, but 2014 Earthquake caused disarrangement of the items in his shop. Each item in his shop is a 40-digit alpha numeric code .
Now Chunky wants to retain the reputation of his shop, for that he has to arrange all the distinct items in lexicographical order.
Your task is to arrange the all the distinct items in lexicographical ascending order and print them along with their count.

Input:
N = 5
A[] =
["2234597891 zmxvvxbcij 8800654113 jihgfedcba",
["1234567891 zxyabcvapo 0123434908 padmadngaa",
["1234567891 abcdefghij 9876543219 jihgfedcba",
["2234597891 zmxvvxbcij 8800654113 jihgfedcba",
["9120121291 zmxvvxbcij 0912114113 mnvxbedcba"]

Output:
1234567891 abcdefghij 9876543219 jihgfedcba 1
1234567891 zxyabcvapo 0123434908 padmadngaa 1
2234597891 zmxvvxbcij 8800654113 jihgfedcba 2
9120121291 zmxvvxbcij 0912114113 mnvxbedcba 1

Explanation:
We have 5 items (40 digit alphanumeric codes)
here. We arrange the items based on the
lexicographical order of their alpha-numeric
code. Distinct items are printed only once.
The count of the items describes how many
such items are there, so items that appear
more than once have their count greater than 1.

*/
#include <bits/stdc++.h>
using namespace std;

struct alphanumeric
{
    string name;
    int count;
};
class Solution
{
public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A)
    {
        vector<alphanumeric> res;
        int count = 1;
        sort(A.begin(), A.end());
        int prev = 0;

        for (int i = 1; i < N; i++)
        {
            if (A[prev] == A[i])
            {
                count++;
            }
            else
            {
                res.push_back({A[prev], count});
                prev = i;
                count = 1;
            }
        }

        res.push_back({A[prev], count});

        return res;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        cin.ignore();
        vector<string> v;
        for (int i = 0; i < N; i++)
        {
            string s;
            getline(cin, s);
            v.push_back(s);
        }
        Solution ob;
        vector<alphanumeric> ans = ob.sortedStrings(N, v);
        for (auto u : ans)
            cout << u.name << " " << u.count << "\n";
    }
}