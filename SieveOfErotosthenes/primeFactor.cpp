#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    while (n > 0)
    {
        int a;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                a = i;
                break;
            }
        }
        cout << a << " " << n << endl;
        n /= a;
    }
    return 0;
}