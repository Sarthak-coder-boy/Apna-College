// For binary search the elements should be sorted
#include <iostream>
using namespace std;
 int bs(int a[],int n,int key){
     int s=0;
     int e=n;
     while(s<=e){
         int mid =(s+e)/2;
         if(a[mid]==key){
             return mid;
         }
         else if(a[mid]>key){
             e =mid-1;
         }
         else
         s=mid+1;
     }
     return -1;
 }
int main () {
    int n;
    cout<<"Enter number of elements ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int key;
     cout<<"Enter element you want to search ";
     cin>>key;
     cout<<bs(a,n,key);

return 0;
}