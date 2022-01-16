#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char s[n];
        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            if (s[i] == '1')
            {
                ct++;
            }
        }
        cout << (ct * (ct + 1)) / 2 << endl;
    }
    return 0;
}