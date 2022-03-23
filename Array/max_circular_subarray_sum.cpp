#include <iostream>
#include <climits>
using namespace std;
int kadane(int a[], int n)
{
    int sum = 0;
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        sum += a[i];
        if (sum < 0)
        {
            sum = 0;
        }
        maxi = max(maxi, sum);
    }
    return maxi;
}
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
    int wsum, nonwsum;
    nonwsum = kadane(a, n);
    int csum = 0;

    for (int i = 0; i < n; i++)
    {
        csum += a[i];
        a[i]=-a[i];
    }
    wsum = csum + kadane(a, n);
    cout << max(wsum, nonwsum);

    return 0;
}
