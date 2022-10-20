/*
F(n = 0) : 0
F(n = 1) : 1

for(n >= 2): F(n) = F(n - 1) + F(n - 2)

Notes:
1. ratio of consecutive fibonacci numbers is going to be 1.6 after a certain values (golder ratio)
 1/1 = 1
 2/1v= 2
 3/2 = 1.5
 5/3 = 1.6667
 8/5 = 1.6
 13/8 = 1.625
 21/13 = 1.61538
 . .. . . .
 377/233 = 1.61802

Golden Ratio iff a + b/b {larger + smaller/smaller} == a/b
                 1 + sqrt(5)/2 = 1.618033....


Binet's formula:
F(n) = ((1 + sqrt(5))/2)^n - ((1 - sqrt(5))/2)^n/sqrt(5)
for larger numbers:
    F(n) = golden ratio ^ n/ sqrt(5)


Fibonacci sequence is a complete sequence (like power of 2):
Every positive integer can be written as sum of fibonacci numbers without using any fibonacci number more than once


Fibonacci Numbers can be written in the matrix form

A = [[1], [1], [1], [0]]
A^n = [[F(n + 1)], [F(n)], [F(n)], [F(n - 1)]]


Cassini's identity
F(N + 1) * F(N - 1) - (F(N))^2 = (-1)^N


Addition Rule: F(m + n) = F(m)* F(n + 1) + F(m - 1) * F(n)


For every positive integer m, F(m * n) is a multiple of F(n)


Two Consecutive fibonacci Numbers are always coprime.
gcd(F(n), F(n + 1)) = 1


GCD(F(M), F(n)) = F(GCD(M, N))


If F(n) is a multiple of F(m), then n is also multiple of m

*/