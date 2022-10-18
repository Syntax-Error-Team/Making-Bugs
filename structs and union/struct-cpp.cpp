/*
structs in cpp
- used to support composite data types
- allow us to store multiple items of different data type together
- user defined datatype
- still in cpp due to backward compatibility
- although cpp has class construct which does all the work of struct and more therefore struct are redundant in cpp but we still use them

typdef with struct:
- to avoid typing that much long

designated initialization:

*/

#include <bits/stdc++.h>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    string address;
};

struct Point
{
    int x;
    int y;
};

int main()
{
    Student s = {101, "ABC", "XYZ"};
    cout << s.rollNo << " "
         << s.name << " "
         << s.address << "\n";

    struct Point p = {.y = 120};
    printf("%d", p.y); // works fine
    return 0;
}