/*
A function f(n) is said to be growing faster than g(n) if:

    Lim     f(n)/g(n) = inf   / Lim     g(n)/f(n) = 0
    n->inf                   /  n->inf

            constraints: n >= 0
                         f(n), g(n) >= 0


Order of growth:
- If order of growth of the function(which represents time taken by an algorithm) is more compared to another algorithm, we say that the given algorithm is worse.

For example: f(n) = n^2 + n + 6
             g(n) = 2*n + 6

so,On solving 

         Lim(n->inf) f(n)/g(n) = 0

Hence, order of growth of f(n) is greater than that of g(n)

There is a direct way to calculate order of growth(constraints: n -> inf, n >= 0):
1. Ignore lower order terms
2. Ignore leading constants

How do we know which terms are lower order?
-> C < log(logn) < log n < N^1/3 < N ^ 1/2 < N < N^2 < N^3 < N ^ 4 < 2^N < N ^ N;


*/

