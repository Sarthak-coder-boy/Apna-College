#include <iostream>
using namespace std;
 void substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    char ch =s[0];
     substring(s.substr(1),ans);
     substring(s.substr(1),ans+ch);
}
int main () {
    string s;
    cin>>s;
   substring(s,"");
        return 0;
}