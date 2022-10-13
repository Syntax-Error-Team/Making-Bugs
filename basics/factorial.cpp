#include <bits/stdc++.h>
using namespace std;

int factorial_n(int n){
    if(n == 0){
        return 1;
    }
    return n*factorial_n(n - 1);
}