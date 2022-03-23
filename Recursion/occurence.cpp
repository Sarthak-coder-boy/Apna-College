#include <iostream>
using namespace std;
int firstoccur(int a[], int n, int i, int key)
{
    if (i == n)
        return 0;
    if (a[i] == key)
    {

        return i;
    }
    return firstoccur(a, n, i + 1, key);
}
int lastoccur(int a[], int n, int i, int key){
   
    
    if (i == n)
        return 0;
      
      if(  lastoccur(a,n,i+1,key)!=0)
      {
          return  lastoccur(a,n,i+1,key);
          }

     
     if(a[i]==key)
     return i;
     return 0;
    
}
/*int last(int a[], int n,  int key){
    if(n<0)
    return 0;
    
    if(a[n]==key)
    return n;
    return last(a,n-1,key);
}*/
int main()
{
    int n, key;
    cin >> n >> key;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << firstoccur(a, n, 0, key)<<endl;
    cout << lastoccur(a, n,0,  key);

    return 0;
}