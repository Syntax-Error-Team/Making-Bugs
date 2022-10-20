/*
calculate sum of squares for n numbers:
n = 3; 
output = 1^2 + 2^2 + 3^2 = 14;

*/

#include <bits/stdc++.h>
using namespace std;

long long sum_of_squares(int n){
    return (n*(n+1)*(2*n+1))/6;
}