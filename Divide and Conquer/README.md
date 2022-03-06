A **divide and conquer algorithm** is a strategy of solving a large problem by

1. breaking the problem into smaller sub-problems
2. solving the sub-problems
3. combining them to get the desired output.

Recursion is mostly used in a divide and conquer algorithm.

Steps of Divide and Conquer algorithms
---
**1. Divide:** Divide the given problem into sub-problems using recursion.

**2. Conquer:** Solve the smaller sub-problems recursively. If the subproblem is small enough, then solve it directly.

**3. Combine:** Combine the solutions of the sub-problems that are part of the recursive process to solve the actual problem.

Merge Sort and Binary Search are some simple examples of Divide and Conquer algorithms.

Time Complexity
---
The complexity of an DaC algorithm is calculated using the master theorem. i.e.
```
T(n) = a*T(n/b) + f(n),

n = size of input
a = number of subproblems in the recursion
n/b = size of each subproblem. All subproblems are assumed to have the same size.
f(n) = cost of the work done outside the recursive call, which includes the cost dividing the problem and cost of merging the solutions.
```

Divide and Conquer vs Dynamic Approach
---
The divide and conquer approach divides a problem into smaller subproblems; these subproblems are further solved recursively. The result of each subproblem is not stored for future reference, whereas, in a dynamic approach, the result of each subproblem is stored fot future reference.

We use the divide and conquer approach when the same subproblem is not solved multiple times and the dynamic approach when the result of a subproblem is to be used multiple times in the future.

Suppose we are trying to find the Fibonacci series. Then, 

Divide and Conquer approach:
---
```
fib(n):
    if n < 2:
        return 1
    else:
        return f(n - 1) + f(n - 2)
```

Dynamic approach:
---
```
mem = []
fib(n):
    if n in mem:
        return mem[n]
    else:
        f = f(n - 1) + f(n - 2)
        mem[n] = f
        return f
```

As we can see here, in dynamic approach, `mem` stores the result of each subproblem for a future use.

Advantages of Divide and Conquer algorithm
---
- The complexity for the multiplication of two matrices using the naive method is O(n3), whereas using the divide and conquer approach (i.e. Strassen's matrix multiplication) is O(n2.8074). This approach also simplifies other problems, such as the Tower of Hanoi.
- This approach is suitable for multiprocessing systems.
- It makes efficient use of memory caches.


Divide and Conquer Applications
---
- Binary Search (*Some believe that this is rather a Decrease and Conquer algorithm than a Divide and Conquer*)
- Merge Sort
- Quick Sort
- Strassen's Matrix multiplication
- Karatsuba Algorithm for fast multiplication
- Closest pair of points in a point set.
- Cooley-Tukey Fast Fourier Transform(FFT) Algorithm