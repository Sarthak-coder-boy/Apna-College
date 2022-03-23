#include <iostream>
#include <cmath>
using namespace std;
bool check(int x , int y ,int z){
    int b,c;
    int a = max(x , max(y,z));
    if(a== x){
        b =y;
        c=z;
    }
    else if ( a==y){
        b=x;
        c=z;
    }
    else {
       
        b==x;
        c==y;
    }
    if(a*a == b*b + c*c){
        return true;
    }
    else
    return false;
    
}
int main () {
    int a , b ,c;
    cout<<"Enter sides ";
    cin>>a>>b>>c;
    if(check(a,b,c)){
        cout<<"Pythagoras Triplet ";
    }
    else
        cout<<" Not Pythagoras Triplet ";
     
return 0;
}