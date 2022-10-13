/*
there are 3 formats : 
fixed, scientific, defaultfloat

fixed/scientific properties:
- in both precision means digits after the decimal points
- if there are not enough digits, then trailing zeroes aree shown in both
- we can set back to default using defaultfloat

main difference between fixed and scientific:
we dont use e in fixed;
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //FIXED FORMAT
    double x = 1.23, y = 1122456.453;
    cout<<std::fixed;
    cout<<x<<"\n"; //1.23000
    cout<<y<<"\n"; // 1122456.453000

    cout<<std::setprecision(2);
    cout<<x<<"\n"; //1.23
    cout<<y<<"\n"; //1122456.45

    double z = 1.2e+7;
    cout<<z; //120000000
    return 0;
}

int main(){
    //SCIENTIFIC FORMAT
    double x = 1.23, y = 112246.453;
    cout<<std::scientific;
    cout<<x<<"\n"; //1.23000e+00
    cout<<y<<"\n"; 
    
    cout<<std::setprecision(2);
    cout<<x<<"\n"; // 1.23e+00
    cout<<y<<"\n"; //1.12e+06

    double z = 1.2e+7;
    cout<<z; //1.20e+07

    return 0;

}