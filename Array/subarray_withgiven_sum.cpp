//  Two pointer approach to optimize the code with time complexity O(n)
#include <iostream>
using namespace std;

int main()
{
    int n, s;
    cout << "Enter number of elements ";
    cin >> n;
    cout << "Enter the sum ";
    cin >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int i = 0, j = 0, st = -1, en = -1, sum =0;
    while (j < n && sum + a[j] <= s)
    {
        sum += a[j];
        j++;
    }
    if (sum == s)
    {
      cout << "Sum is present from index " << i << " to " << j-1;

        return 0;
    }
    while (j < n)
    {
        sum += a[j];
        if (sum > s)
        {
            sum -= a[i];
            i++;
        }
        if (sum == s)
        {
            st = i ;
            en = j ;
            break;
        }
        j++;
    }
    	cout << "Sum is present from index " << st<< " to " << en;
  

    return 0;
}

//   It has the time complexity O(n^2)
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int n, k;
// 	cout << "Enter number of elements ";
// 	cin >> n >> k;

// 	int a[n];
// 	for (int i = 0; i < n; i++)
// 	{
// 		cin >> a[i];
// 	}
// 	for (int i = 0; i < n; i++)
// 	{
// 		int sum = 0;
// 		for (int j = i; j < n; j++)
// 		{
// 			sum += a[j];
// 			if (sum == k)
// 			{

// 				cout << "Sum is present from index " << i << " to " << j;
// 				return 0;
// 			}
// 		}
// 	}
// 	return 0;
// }