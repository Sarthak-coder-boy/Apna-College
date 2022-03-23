#include <iostream>
using namespace std;

int main () {
    int n;
    cout<<"Enter number of elements ";
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    int a;
    cout<<"Enter element you want to search ";
    cin>>a;
    for(int i=0;i<n;i++){
        if(a==arr[i]){
            cout<<"Yes we find the number "<<endl;
        }
        
    }
        
return 0;
}