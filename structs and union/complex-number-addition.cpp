/*
a + bi; where a is the real part, b is the imaginary part

(a + bi) + (c + di)
= (a + c) + (b + d)i

example: 
1 + 2i
3 + 4i

*/

#include <bits/stdc++.h>
using namespace std;
struct complx
{
    /* data */
    int real, imag;
};

int main()
{
    complx n1, n2, n3;
    cin>>n1.real>>n1.imag;
    cin>>n2.real>>n2.imag;
    
    n3.real = n1.real + n2.real;
    n3.imag = n1.imag + n2.real;

    cout<<n3.real<<" + "<<n3.imag<<"i";
    return 0;
}