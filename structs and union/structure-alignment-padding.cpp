/*
Data type(including int, float, double...) has alignment requirements

a structure has alignment requirements same as its largest member's requirements

reason for alignment:
- physical memory is accessed in the form of word (4 byes in a 32 bit machine and 8 bytes in a 64 bit machine)

- without alignment, it is inefficient to store variable that span across multiple words
*/

#include <bits/stdc++.h>
using namespace std;

struct s1{
    char c1;
    double d1;
    char c2;
};

struct s2
{
    char c1;
    char c2;
    double d1;
};

int main()
{
    cout<<sizeof(s1)<<" "
    <<sizeof(s2);
    return 0;
}

// OUTPUT: MACHINE DEPENDENT 
// ON IA64 : 24 16