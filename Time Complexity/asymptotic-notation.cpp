/*
Asymptotic Notation:
Mathematical notation to represent order of growth of any mathematical function
When you analyze algorithms, you never check best case as it is bogus; 
Average case is taken under some consideration but it is tedious and unreliable;
Worst case is the appraoch we take all the time;

Mathematical notations required to denote asymptotic notation:
Big O: Represents exact bound or upper bound
Theta: Represents exact bound
Omega: Represents exact or lower bound
*/

#include <bits/stdc++.h>
using namespace std;

//Order of growth: N

int getSum(int arr[], int n){
    int sum = 0; 
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main()
{
    
    return 0;
}