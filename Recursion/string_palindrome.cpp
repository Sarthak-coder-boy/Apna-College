#include <bits/stdc++.h>
using namespace std;
  bool check(int i,string s,int n)
 {
     if(i>=n/2)
     { 
         return true ;
     }
     if(s[i]==s[n-i-1]) 
     {
         return check(i+1,s,n);
     }
      return false;

 }
int main () {
    string s;
    cin>>s;
     int n= s.length();
    cout<< check(0,s,n);
return 0;
}