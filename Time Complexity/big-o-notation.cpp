/*
Big O notation is used to represent exact or upper bound in order of growth

We say f(n) = O(g(n)) iff there exits constants c and n0 such that f(n) <= g(n) for all n >= n0

for example:
f(n) = 2*n + 3 can be written as O(n)
Let us take C = 3 (highest coefficient of n + 1)
2*n + 3 <= 3 * n
3 <= n

We get n0 = 3

* Big O notation works for multiple variables as well
* Use when you have upper bound

In general, we find the worst case order of growth for an algorithm and put it in O notation and we call it the time complexity of the algorithm
*/
