#include <bits/stdc++.h> // In place of  iostream as  it include all the header file
using namespace std;
int convert(string n)
{
    int a = 0;
    int b = 1;
    int s = n.size();
    for (int i = s - 1; i >= 0; i--)
    {
        if(n[i]>= '0' && n[i]<= '9'){
            a+=b*(n[i]-'0');
        }
        else if (n[i] >= 'A' && n[i]<='F'){
            a+=b*(n[i]-'A' + 10);
        }

       b*=16;
    }
    return a;
}
int main()
{
    string n;
    cout << "Enter Hexadecimal ";
    cin >> n;
    cout << convert(n);

    return 0;
}