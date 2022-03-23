#include <iostream>
#include <string>
using namespace std;
string convert(int n)
{
    int b =1;
    string ans = "";
    while(b<=n)
    b*=16;
    b/=16;
    while(b>0){
        int l = n/b;
        n -=l*b;
        b/=16;
        if(l<=9)
        ans =ans+to_string(l);
        else{
            char c = 'A'+ l-10;
            ans.push_back(c);
        }

    }
    return ans;
}
int main()
{
    int n;
    cout << "Enter Decimal ";
    cin >> n;
    cout<<convert(n);
    return 0;
}