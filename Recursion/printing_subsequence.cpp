  #include <bits/stdc++.h>
 using namespace std;
 void subsequence(int arr[],vector<int>v,int n,int i)
 {
if(i==n)
{
    for(int i=0;i<v.size();i++)
         cout<<v[i]<< " ";
         cout<<endl;
    return;
}
subsequence(arr,v,n,i+1);
v.push_back(arr[i]);
 
subsequence(arr,v,n,i+1);

 }
 int main () {
     int n;
     cin>>n;
     int a[n];
     for ( int i = 0;i<n; i++)
     {
         cin>>a[i];
     }
      vector<int>v;
     subsequence(a,v,n,0);
     
 return 0;
 }