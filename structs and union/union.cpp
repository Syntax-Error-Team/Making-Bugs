/*
union is used to create a user defined data type like structure and classes
applications of union:
- type punning
- using anonymous union to use one type for multiple purposes
*/

#include <bits/stdc++.h>
using namespace std;

union Test{
    int x;
    int y;
};

union fest
{
    int x;
    float y;
};

union pest
{
    /* data */
    int x;
    char bin[4];
};

struct Node{
    int data;

    union
    {
        struct
        {
            Node *left, *right;
        };
        struct 
        {
            Node *prev, *next;
        };
        
        
    };
    
};

int main()
{
    Test t;
    t.x = 10;
    cout<<t.x<<" "<<t.y<<"\n";
    t.y = 20;
    cout<<t.x<<" "<<t.y<<"\n";
    cout<<sizeof(t);

    fest t2;
    t2.y = 1.1;
    cout<<t2.x;

    pest t3;
    t3.x = 512;
    cout<<(int)t3.bin[0]<<(int)t3.bin[1];


    return 0;
}