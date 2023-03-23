#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long a;// a is decimal number
    long long b = 0; //b is binary number
    cin >> a;
    int p = 0;
    while (a > 0)
    {
        b += (a % 2) * pow(10, p);
        ++p;
        a /= 2;
    }
    a=b;
    cout << a; // but i wanna convert a to binary number
}
