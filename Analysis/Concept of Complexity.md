To talk about the complexity of the algorithm, we must first define two other concepts: ***size of the input*** and ***metrics of measuring the cost of the algorithm***

_Let:_
- _A_ — the algorithm
- _x_ — input values of A
- _y_ — the result of A
- _T(time)_ — time costs
- _S(space)_ — memory(space) costs
- _||x||_ — size of input values (>=0)


<img src="https://render.githubusercontent.com/render/math?math=C^{T}_{A}(x)" style="background-color:white"> defines the ***_time costs_(amount of operations required)*** of applying the algorithm _A_ with input _x_,
<img src="https://render.githubusercontent.com/render/math?math=C^{S}_{A}(x)" style="background-color:white"> defines the extra(without input) ***_memory costs_(space required for the operations)*** of applying algorithm _A_ with input _x_. 

Now let's consider some simple algorithms as examples:
##### 1. Matrix Multiplication: 
Based on the definition of the product of matrices, for multiplication of two <img src="https://render.githubusercontent.com/render/math?math=n x n" style="background-color:white"> matrices, we'll need to make <img src="https://render.githubusercontent.com/render/math?math=n^2" style="background-color:white"> operations of multiplication. Often in tasks, costs are measured precisely
the number of multiplicative operations, considering that they significantly exceed the costs of additive operations.
##### 2. Checking whether a number is prime or not
One of the algorithms for checking the primality of a given integer <img src="https://render.githubusercontent.com/render/math?math=n\geq2" style="background-color:white"> is to find a divisor of **_n_** among integers from 2 to <img src="https://render.githubusercontent.com/render/math?math=\sqrt{n}" style="background-color:white">. If at least 1 divisor among these numbers is found, then **_n_** is obviously not a prime number and there is no point in searching for a divisor bigger than <img src="https://render.githubusercontent.com/render/math?math=\sqrt{n}" style="background-color:white">. This algorithm has a significant difference from the previous one. In the case of matrix multiplication, it was reliably known that exactly <img src="https://render.githubusercontent.com/render/math?math=n^2" style="background-color:white"> multiplicative operations would be required, but here it is impossible to immediately say the number of multiplicative operations. There might be needed up to <img src="https://render.githubusercontent.com/render/math?math=\sqrt{n} - 1" style="background-color:white"> multiplicative operations, or might be as well, **0**.


Definition:
----------------
Let the input size ||x||, <img src="https://render.githubusercontent.com/render/math?math=C^{T}_{A}(x)" style="background-color:white"> <img src="https://render.githubusercontent.com/render/math?math=C^{S}_{A}(x)" style="background-color:white"> are all defined as non-negative integer functions.

- <img src="https://render.githubusercontent.com/render/math?math=T_{A}(n) = \max\limits_{||x|| = n} C_{A}^T(x)" style="background-color:white"> is the ***time complexity*** _algorithm A_,
- <img src="https://render.githubusercontent.com/render/math?math=S_{A}(n) = \max\limits_{||x|| = n} C_{A}^S(x)" style="background-color:white"> is the ***space complexity*** of _algorithm A_.

