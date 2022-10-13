/*
There are many factors involved in calculating the speed of algorithms for example, machine, programming language, etc. The analysis which handles all these issues is called asymptotic analysis.
Asymptotic analysis measures the order of growth of an algorithm in terms of input size.

Constraints: N > 0 always
*/

/*
Question : Given a number, write a function to find the sum of first n numbers
*/

#include <bits/stdc++.h>
using namespace std;

// fun1: there is some work which depends on n here{for loop, sum increament, i increament}; so, time taken: C2*N + C3
int fun1(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1;
    }
    return sum;
}

// fun2: constant: not dependent on input size: C1
int fun2(int n)
{
    return (n * (n + 1)) / 2;
}

// Fun3: there is n number of operations for each loop of n times: C4 * n^2 + C5 * n  + C6
int fun3(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            sum++;
        }
    }
    return sum;
}

int main()
{
    // input space
    return 0;
}