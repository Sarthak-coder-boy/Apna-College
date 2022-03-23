#include <iostream>
#include <cmath>
using namespace std;
int convert(int n)
{
    int a = 0 ;
    int b = 1 ;
    while (n >0)
     {
    int r = n % 10;  
    a+=b*r;
    b*=2;
    n = n / 10;
    }
    return a;
}
int main()
{
    int n;
    cout << "Enter Binary ";
    cin >> n;
cout<<convert(n);
    return 0;
}