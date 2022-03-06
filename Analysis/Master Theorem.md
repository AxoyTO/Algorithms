In the analysis of algorithms, the master theorem for divide-and-conquer recurrences provides an asymptotic analysis (using Big O notation) for recurrence relations of types that occur in the analysis of many divide and conquer algorithms.

The master method is a formula for solving recurrence relations of the form:
```
T(n) = aT(n/b) + f(n),
where,
n = size of input
a = number of subproblems in the recursion
n/b = size of each subproblem. All subproblems are assumed 
     to have the same size.
f(n) = cost of the work done outside the recursive call, 
      which includes the cost of dividing the problem and
      cost of merging the solutions

Here, a ≥ 1 and b > 1 are constants, and f(n) is an asymptotically positive function.
```

An asymptotically positive function means that for a sufficiently large value of `n`, we have `f(n) > 0`.

*Note that not all recurrence relations can be solved with the use of this theorem!*

Master Theorem
---
If `a ≥ 1` and `b > 1` are constants and `f(n)` is an asymptotically positive function, then the time complexity of a recursive relation is given by
```
T(n) = aT(n/b) + f(n)

where, T(n) has the following asymptotic bounds:

    1. If f(n) = O(n^((log_b a)-ϵ)), then T(n) = Θ(n^(log_b a)).

    2. If f(n) = Θ(n^(log_b a)), then T(n) = Θ(n^(log_b a) * log n).

    3. If f(n) = Ω(n^((log_b a)+ϵ)), then T(n) = Θ(f(n)).

ϵ > 0 is a constant.
```

Each of the above conditions can be interpreted as:

1. If the cost of solving the sub-problems at each level increases by a certain factor, the value of `f(n)` will become polynomially smaller than `n^(log_b a)`. Thus, the time complexity is oppressed by the cost of the last level i.e. `n^(log_b a)`.
2. If the cost of solving the sub-problem at each level is nearly equal, then the value of `f(n)` will be `n^(log_b a)`. Thus, the time complexity will be `f(n)` times the total number of levels i.e. `n^(log_b a) * log(n)`.
3. If the cost of solving the subproblems at each level decreases by a certain factor, the value of `f(n)` will become polynomially larger than `n^(log_b a)`. Thus, the time complexity is oppressed by the cost of `f(n)`.

Solved Example of Master Theorem
---
```
T(n) = 9T(n/3) + n

a = 9, b = 3, f(n) = n

logb a = log_3 9 = 2

ie. f(n) = n^((log_b a)-ϵ) , where, ϵ is a constant = 1. 

-> Case 1 implies here.

Thus, T(n) = f(n) = Θ(n^(log_b a)) = Θ(n^2) 
```

Merge Sort Analysis with Master Theorem
---
```
T(n) = 2T(n/2) + n

a = 2, b = 2, f(n) = n
log_b a = log_2 2 = 1

i.e. f(n) = n = O(n)

-> Case 2 implies here.

Thus, T(n) = Θ(n*log(n)) 
```

Another example of Master Theorem
---
```
T(n) = 3T(n/4) + nlogn

a = 3, b = 4, f(n) = nlogn
log_b a = log_4 3 ~ 0.8

i.e. f(n) = nlogn = n^(0.8 + ϵ)

-> Case 3 implies here.

In this case, we should make a regularity condition control i.e. af(n/b) < cf(n) where n >= 0, c < 1, a >= 1 and b > 1.

3f(n/4) < cf(n) --> 3*(n/4)*log(n/4) < c*n*logn --> c < 1 can be found. e.g. 1/2

The regularity condition is achieved.

Thus, f(n) = Ω(n^((log_b a)+ϵ)) = Ω(n^((log_4 3) + ϵ))

T(n) = Θ(f(n)) = Θ(n(log(n)))


```


Master Theorem Limitations
---
The master theorem cannot be used if:
- `T(n)` is not monotone. e.g. `T(n) = sin(n)`
- `f(n)` is not a polynomial. e.g. `f(n) = 2^n)`
- `a` is not a constant. e.g. `a = 2n`
- `a < 1`