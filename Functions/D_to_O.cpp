#include <iostream>
using namespace std;
int convert(int n){
    static int j;
    int r,i=0; 
    int a[100];
    while(n>0){ 
        r=n%8;
        
        a[i]=r;
        n=n/8;
        i++;
        j++;
          }
    for(int k = j-1; k>=0;k--){
       cout<<a[k] ;
         
    }
    
}
int main () {
       int n ;
    cout<<"Enter Decimal ";
    cin>>n;
    convert(n);
return 0;
}