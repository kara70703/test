#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a;
    int i = 0;
    int b = 0;
    cin >> a;
    while (a!=0)
    {
        if (a%2==1)
        {
            b=b+pow(2,i);
        }
        a=a/10;
    i=i+1;
    }
    cout << b;
}
