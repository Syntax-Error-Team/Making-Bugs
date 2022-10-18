/*
class vs struct in cpp
- a class has all of its members private by default
- a struct has al of its members public by default

Note: we can make things private in struct and public in class.

WHEN TO USE A STRUCTURE AND WHEN TO USE A CLASS?
- we use structs when we only want to bundle multiple items together aka use comosite data types
- we use classes in object oriented programming construct and in data abstraction

struct and class differ in inheritance also. Default for struct is public and for class it is private
Note: this behavior can be changed as well
*/

#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    int x;
};

class Derived : Base
{
}; // x becomes private here due to lack of initialization

class Point
{
    int x;
    int y;
};

struct Point2
{
    int x;
    int y;

    Point2(int a, int b)
    {
        x = a;
        y = b;
    }

    void Print()
    {
        cout << x << " " << y << endl;
    }
};

struct Base2
{
    int x;
};
struct Derived2 : Base2
{
};

int main()
{
    Point p;
    p.x = 10;    // compiler error
    cout << p.x; // compiler error

    Point2 p2(10, 20);
    p2.Print();

    Derived d;
    d.x = 20; // private so compiler error

    Derived2 d2;
    d2.x = 20; // public
    return 0;
}