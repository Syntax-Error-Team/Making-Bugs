/*
person saves 1 dollar on day 1, 2 dollar on day 2, n dollars on n day
find total amount of money saved in n days;
*/
#include <bits/stdc++.h>
using namespace std;

int sum_n(int n){
    return (n*(n+1))/2;
}
