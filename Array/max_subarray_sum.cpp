#include <iostream>
#include <climits>
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

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            cout << sum << endl;
            maxi = max(maxi, sum);
        }
    }
    cout << "Max sum is " << maxi;
    return 0;
}