#include <iostream>

using namespace std;

int main()
{
    cout<<"the number changer (big to small)"<<endl;
    int a;
    int b;
    int c;
    int d;
    cin>>a>>b>>c>>d;
    if (a<b){
    int t = a;
    a = b;
    b = t;
    }
    if (a<c)
    {
    int t = a;
    a = c;
    c = t;
    }
    if (a<d)
    {
    int t = a;
    a = d;
    d = t;
    }
    if (b<c){
    int t = b;
    b = c;
    c = t;
    }
    if (b<d)
    {
    int t = b;
    b = d;
    d = t;
    }
    if (c<d)
    {
        int t = c;
        c = d;
        d = t;
    }
    cout<<a<<" "<<b <<" "<<c<<" "<<d;
}
