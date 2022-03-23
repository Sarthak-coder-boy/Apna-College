#include <bits/stdc++.h>
using namespace std;

int main () {
    string s;
     getline(cin,s);


    /*int n=s.size();
    for(int i=0;i< n;i++){
        if(s[i]>='a'&& s[i]<='z'){
            s[i]-=32;
        }
        else if (s[i]>='A'&&s[i]<='Z'){
            s[i]+=32;
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }*/

// In built function to convert lower to uppercase and vice versa
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
return 0;
}