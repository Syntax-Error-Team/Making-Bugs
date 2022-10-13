/*
manipulating default floating point printing format:

note: default floating point printing format applies TO ALL FLOATING POINT VALUES;

- setprecision(n): changes the default precision;
- showpoint: show trailing zeroes;
        noshowpoint reverses it;
- uppercase: prints 'e' as E.
        nouppercase reverts it;
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<std::setprecision(4);
    double x = 15.5683, y = 34267.1;
    cout<<x<<" "<<y<<"\n"; // 15.57 3.427e+04 {will print in power format if decimal point numbers are less than setprecision number}
    double z = 1.23;
    cout<<std::showpoint<<z<<"\n"; //1.230
    cout<<std::showpos<<z<<"\n";//+1.230
    cout<<std::uppercase<<z<<"\n"; // + 3.427E+04
    return 0;
}