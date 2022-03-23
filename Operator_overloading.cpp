 //Operator Overloading

#include<iostream>

using namespace std;

class Complex
{
public:
    int a,b;
    void input(string s)
    {
        int v1=0;
        int i=0;
        while(s[i]!='+')
        {
            v1=v1*10+s[i]-'0';
            i++;
        }
        while(s[i]==' ' || s[i]=='+'||s[i]=='i')
        {
            i++;
        }
        int v2=0;
        while(i<s.length())
        {
            v2=v2*10+s[i]-'0';
            i++;
        }
        a=v1;
        b=v2;
    }
};
Complex operator-(Complex &c,Complex &d)
{
    Complex temp;
    temp.a = c.a - d.a;
    temp.b = c.b - d.b;
    return temp;
}

ostream& operator<<(ostream& out,Complex  &temp)
{
    out << temp.a << "+i" << temp.b;
    return out;
}
  

int main()
{
    Complex x,y;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    x.input(s1);
    y.input(s2);
    Complex z=x-y;         //Here - is a member function made by operator overlaoding
    cout<<z<<endl;
}
