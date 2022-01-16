#include <iostream>
using namespace std;

void increase(int *n)
{
    *n = *n + 1;
}

int main()
{
    int n;
    cin >> n;
    increase(&n);
    cout << n << endl;
    return 0;
}