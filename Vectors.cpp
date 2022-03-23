#include <iostream>
#include <vector>
using namespace std;

int main () {
    vector<int>v;
    v.push_back(12);
    v.push_back(8);
    v.push_back(9);
    v.push_back(7);

    // Printing the elements
        //  for(int i=0;i<v.size();i++)
        //  cout<<v[i]<<endl;


    // Printing the elements
        //  vector<int>::iterator it;
        //  for(it =v.begin();it<v.end();it++)
        //  cout<<*it<<endl;


    // Printing the elements
           // for(auto element:v)
           // {
               // cout<<element<<endl;
           // }


  // Deleting the last element from the vector
          // v.pop_back();
          // for(auto element:v)
          // {
          // cout<<element<<endl;
          // }
    return 0;
}