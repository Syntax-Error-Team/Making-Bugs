/*
iterators give you the addresss of the element
their purpose is to allow member access and implement algorithms

next iterator: it gives you the iterator after given positions ahead; without arguements, it gives you the iterator of next element;

advanced functions is used to get iterator positions of the element n positions ahead
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,20,30,40,50};
    vector<int>::iterator i = v.begin(); //gives you iterator which holds address of first element
    cout<<(*i)<<" "; //dereferencing operator
    i++;
    cout<<(*i)<<" "; //20
    i = v.end(); //gives you iterator that holds the address of one element after the end of the array
    i--;
    cout<<(*i)<<" ";
    
    //next iterator
    i = next(i);
    cout<<(*i)<<" "; //20

    i = next(i , 2);
    cout<<(*i)<<" "; //40

    i = prev(i);
    cout<<(*i)<<" "; //30

    //advance iterator
    advance(i, 3);
    cout<<(*i)<<endl;

    return 0;
}


/*
TYPES OF ITERATORS:
only logical classification of iterators
There are mainly five types of iterators:
    - input and output
            |
           \/
    - forward 
            |
           \/
    - bidirectional
            |
           \/
    - random


INPUT: they are used to read data; we can move ahead only
OUTPUT: they are only used to write data; opp of input;

FORWARD: can both input and output; can move forward only;
BIDIRECTIONAL: features of forward included and can move backward also;

RANDOM: most versatile ; have properties of bidirectional and can access random location



SIMPLE: Forward_list        forward
        list                bidirectional
        vector              random

ASSOCIATIVE: set
             map
             multimap               --- bidirectional
             multinet

             unordered_set          --- forward
             unordered_map




*/