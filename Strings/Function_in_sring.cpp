#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main () {
string s1 ="saak";
string s2 ="abefhgtdf";
string s3 =" 4686";
int a =3254;
// s1 and s2 will be added or appended and stored in s1                         ---->  s1.append(s2);
// We can also use + to append the strings                                      ---->  s1 + s2;
// It will clear all the data which is stored inside the varaiable s3           ---->  s3.clear();
// It will compare the two strings                                              ---->  cout<<s2.compare(s1);
// It will check whether a string is empty or not                               ---->  s1.empty();
// It will erase 3 elemets from 1st index                                       ---->  s1.erase(1,3);
// It will find return the index from where the element is starting             ---->  cout<<s1.find("cw");
// It will insert the word in the string at 2nd index                           ---->  cout<<s1.insert(2,"rth");
// It will return the length of the string                                      ---->  cout<<s2.size()<<endl<<s2.length();
// It will return 5 elements from 2nd index                                     ---->  cout<<s2.substr(2,5);
// It will convert the string into integer                                      ---->  int x=stoi(s3);
// It will convert int into string                                              ---->  string s4 = to_string(a);
// It will sort the string in ascending order                                   ---->  sort(s2.begin(),s2.end());
 cout<<s3+"6";
return 0;
}