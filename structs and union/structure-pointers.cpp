/*
pointer to a structure can be declared in the same way as we declare pointer for normal data types

when we access a structure members using a pointer, we use arrow operator(->)

*/

#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x;
    int y;
};

void print(Point p)
{
    cout << p.x << " " << p.y << endl;
}

struct Student
{
    int rollNo;
    string name;
    string address;
    int age;
    string section;
};

void print(Student &x)
{
    cout << x.rollNo << " "
         << x.name << " "
         << x.address << " "
         << x.section << " ";
}

int main()
{
    Point p = {10, 20};
    Point *ptr = &p;
    cout << ptr->x << " ";
    ptr->x = 30;
    cout << p.x;

    Point arr[5];
    for (int i = 0; i < 5; i++)
    {
        arr[i].x = i;
        arr[i].y = i * 10;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i].x << " " << arr[i].y << endl;
    }

    print(p);

    return 0;
}