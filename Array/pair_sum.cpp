#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter number of elements ";
    cin >> n;
    cout << "Enter the sum we want to search ";
    cin >> k;
    int c = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            c = a[i] + a[j];
            if (c == k)
            {
                cout << "Sum is present at "<<i<<" and "<<j<<endl;
                break;
            }
            
        }
    }
    
    return 0;
}
/* Only used when array is sorted

#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cout << "Enter number of elements ";
    cin >> n;
    cout << "Enter the sum we want to search ";
    cin >> k;
    int c = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        if (a[low] + a[high] == k)
        {
            cout << "Sum is present at " << low << " and " << high;
            break;
        }
        else if (a[low] + a[high] < k)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return 0;
}
*/