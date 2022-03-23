#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of elements ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        int b = 0;
        for (int j = i; j < n; j++)
        {
            b += a[j];
            cout << b << endl;
        }
    }
    return 0;
}