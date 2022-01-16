#include <iostream>
using namespace std;

int main()
{
    // int a = 10;
    // int *adr; //declaring a pointer
    // adr = &a; //storing the address of variable 'a' in adr

    // cout << "Address of 'a' : " << adr << endl;

    // int **aadr;
    // aadr = &adr;
    // cout << "Address of the address of 'a' : " << aadr << endl;

    int arr[] = {10, 20, 30};
    cout << *arr << endl;

    int *ptr = arr;             //address of array
    for (int i = 0; i < 3; i++) //printing the pointer array
    {
        cout << *ptr << endl; //printing the array element but we are using the address
        ptr++;                //increament of pointer
        // cout << *(arr + i) << endl;  same as the above but here we are using directly
    }
    return 0;
}