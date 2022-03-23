#include <iostream>
using namespace std;
int fact(int n){
    int a=1;
    for(int i=2;i<=n;i++){
        a=a*i;
    }
    return a;
}
int main () {
    int n,r;
      cout<<"Enter number ";
    cin>>n>>r;
    cout<<fact(n)/(fact(r)*fact(n-r));
return 0;
}