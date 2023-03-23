#include <iostream>
using namespace std;
int main()
{
    int a;
    int b;
    int c=0;
    cin>>a;
    cout<<endl;
    cin>>b;
    if (a>b)
    {
        cout<<a<<" is the biggest so i ain't swappin.";
    }
    else if (a==b)
    {
        cout<<a<<" is equal to "<<b<< " so no swappin.";
    }
    else if (a<b)
    {
        c=b;
        a=c;
        b=a;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    cout<< "swapped cuz a smaller than b.";
    }
return 0;}
