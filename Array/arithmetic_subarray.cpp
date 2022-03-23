// Arithmetic subarray means the subarrays in which difference between the two elements is same

// Google Kickstart

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of elements ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 2;
    int pd = a[1] - a[0];
    int cur = 2;
    
   for(int i=2;i<n;i++)
    {
        if (pd == a[i] - a[i - 1]) 
            cur++; 
        else 
        {
            pd = a[i] - a[i - 1];
            cur = 2;
        }
        ans = max(ans, cur);
        
    }
    cout << "Longest arithmetic subarray is " << ans;
    return 0;
}