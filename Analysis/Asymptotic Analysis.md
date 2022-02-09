It isn't always possible to calculate complexity of an algorithm. Moreover, the explicit form of complexity might not be what we are looking for. If so, we may just want to understand if the complexity and input size are proportionally rising.

Let _A_ and _B_ algorithms working on the same task with different approaches. How do we find out which one is better?

**1)** It might be possible for algorithms _A_ and _B_ to work in different ways in different machines and have different costs for different systems. 

**2)** It might also be possible that for a set of inputs algorithm _A_ may perform better than algorithm _B_ on one machine and algorithm _B_ performs better on another machine for another set of inputs.

***Asymptotic Analysis*** is the big idea that handles above issues in analyzing algorithms. 
**In Asymptotic Analysis, we evaluate the performance of an algorithm in terms of input size (we don’t measure the actual running time). We calculate, how the time (or space) taken by an algorithm increases with the input size.**

For example, let's consider the search problem (searching a given item) in a sorted array. One way to search is _Linear Search_ (order of growth is linear) and the other way is _Binary Search_ (order of growth is logarithmic). To understand how Asymptotic Analysis solves the above mentioned problems in analyzing algorithms, let us say we run the Linear Search on a fast computer A and Binary Search on a slow computer B and we pick the constant values for the two computers so that it tells us exactly how long it takes for the given machine to perform the search in seconds. Let’s say the constant for A is 0.2 and the constant for B is 1000 which means that A is 5000 times more powerful than B. **For small values of input array size n, the fast computer may take less time. But, after a certain value of input array size, the Binary Search will definitely start taking less time compared to the Linear Search even though the Binary Search is being run on a slow machine. The reason is the order of growth of Binary Search with respect to input size is logarithmic while the order of growth of Linear Search is linear. So the machine dependent constants can always be ignored after a certain value of input size.**

Here are some running times for this example:

Linear Search running time in seconds on A(Fast Computer): <img src="https://render.githubusercontent.com/render/math?math=0.2*n" style="background-color:white">

Binary Search running time in seconds on B(Slow Computer): <img src="https://render.githubusercontent.com/render/math?math=1000*\log(n)" style="background-color:white">


For insertion sort, we calculate an an asymptotic estimate of **T(n) = n^2 + O(n)**. This estimate means that the complexity function doesn't increase faster than **n^2**. Regarding this, the insert sort has a squared complexity of ***O(n^2)***. This means that the complexity function of insertion sort is of the order of n^2.

### **Definitions**
---

**1) Θ Notation**

    The theta notation bounds a function from above and below, so it defines exact asymptotic behavior. 
 The notation <img src="https://render.githubusercontent.com/render/math?math=f(n) = \Theta(g(n))" style="background-color:white"> means that for any integer ***N***, there are constants ***c1*** and ***c2*** such that the equation <img src="https://render.githubusercontent.com/render/math?math=c_1 \mid{g(n)}\mid \leq \mid{f(n)}\mid \leq c_2 \mid{g(n)} \mid" style="background-color:white"> is always correct for every **n > N**

**2) Big O Notation**

    The Big O notation defines an upper bound of an algorithm, it bounds a function only from above.

The notation <img src="https://render.githubusercontent.com/render/math?math=f(n) = O(g(n))" style="background-color:white"> means that for any integer N, there is a constant ***c1***, such that <img src="https://render.githubusercontent.com/render/math?math=0 \leq \mid{f(n)}\mid \leq \c_1\mid{g(n)}\mid " style="background-color:white">

**3) Ω Notation**
     
     Just as Big O notation provides an asymptotic upper bound on a function, Ω notation provides an asymptotic lower bound.

The notation <img src="https://render.githubusercontent.com/render/math?math=f(n) = \Omega(g(n))" style="background-color:white"> means that for any integer N, there is a constant ***c1***, such that <img src="https://render.githubusercontent.com/render/math?math=\c_1\mid{g(n)}\mid \leq \mid{f(n)}\mid" style="background-color:white">

**4) Exact Estimate**

 There might be more than one estimate that is correct for a complexity function. The estimate of <img src="https://render.githubusercontent.com/render/math?math=f(n) = O(g(n))" style="background-color:white"> is called an ***exact estimate*** if <img src="https://render.githubusercontent.com/render/math?math=f(n) = o(g(n))" style="background-color:white"> is not correct.

