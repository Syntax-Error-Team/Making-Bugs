/*
default floating point printing format
- no trailing zeroes
- precision means total digits (excluding the digits after e)
- default precision value is 6
- when value before decimal point does not fit in 6 digits, power format is used 
        FOR example: 1234568.3 is printed on 1.234567e+06;

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double x = 1.2300;
    cout<<x<<"\n";
    double y = 1567.56732;
    cout<<y<<"\n";
    double z = 1244567.45;
    cout<<z<<"\n";
    double w = 124456.67;
    cout<<w<<"\n";
    double u = 123e+2;
    cout<<u<<"\n";
    return 0;
}