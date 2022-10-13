#include <bits/stdc++.h>
using namespace std;

int main()
{
    //manipulation to bool values
    bool a = true;
    cout<<a<<"\n"; //1
    cout<<std::boolalpha; 
    cout<<a<<"\n"; //true
    cout<<std::noboolalpha; 
    cout<<a; //1

    //manipulation to integer values
    int a = 26, b = 69;
    cout<<a<<" "<<b<<"\n";
    cout<<std::hex;
    cout<<a<<" "<<b<<"\n";
    cout<<std::oct;
    cout<<a<<" "<<b<<"\n";
    cout<<std::dec;

    //more flags
    int p = 69;
    cout<<std::showbase;
    cout<<std::oct;
    cout<<a<<"\n";
    cout<<std::hex;
    cout<<a<<"\n";
    cout<<std::showpos;
    cout<<a<<"\n";
    cout<<std::uppercase;
    cout<<a<<"\n";

    //alignment
    cout<<"hi"<<"\n";
    cout<<std::left;
    cout<<std::setw(5);
    cout<<a<<"\n";

    return 0;
}