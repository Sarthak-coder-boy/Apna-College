#include <iostream>
using namespace std;
int pow(int n,int m){
     if(m==0)
     return 1;
    
    return n*pow(n,m-1);

}
int main () {
    int m,n;
    cin>>n>>m;
    cout<<pow(n,m);
return 0;
}