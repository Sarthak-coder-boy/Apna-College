#include <iostream>
using namespace std;
void fib(int a){
    int t1 = 0;
    int t2 = 1;
    int nextterm;
    for(int i=1;i<=a;i++){
        nextterm = t1+t2;
        cout<<t1<<endl;
 t1 = t2;
 t2 = nextterm;
    }

}
int main () {
    int n;
    cout<<"Enter number ";
    cin>>n;
    fib(n);
return 0;
}