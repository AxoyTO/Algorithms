> An algorithm is basically an approach, a process or set of rules to be followed in calculations or other problem-solving operations, especially by a computer.

So why do we need so many algorithms to solve a specific problem or a calculation? Because they mostly satisfy different use cases with different time complexities. Here are some examples for sorting algorithms:
- **`Merge Sort`** is useful for sorting linked lists.
- **`Polyphase merge sort`** is useful if the sort set can't fit into RAM.
- **`Heapsort`** is very good for sorting arrays and is used by many relational database engines for in-memory sorting, or for the memory part of the polyphase merge sort. It uses little extra RAM and is very predictable, which is the sort of behavior you want in a DB engine.
- **`Quicksort`** has excellent _average case_ behavior and _poor worst_ case behavior. Therefore it is the default sorting algorithm for most sorting library implementations. It's bad worst case behavior is why it isn't used for DB engines.
- **`Insertion Sort`** is good if you have a set that is almost sorted; it's good if you have a sorted list that has a couple items added to it occasionally but then needs to be resorted.
- **`Bubble sort`** has its use case: if you have a very small sort set so you can stand its O(n^2) average case and don't want a lot of code - as it's by far the shortest sort algorithm by simple count of code.

**To determine the optimal algorithm in a group of algorithms, which tend to solve the same problem, we need to make analysis of their complexities, user-friendliness, modularity, security, thread-safety, maintainability etc.** Therefore, the purpose of this repository is to become more familiar with the analysis of some of the most popular algorithms and their implementations.


    To be added:
    - Dictionary
    - Analysis of algorithms (Asymptotic, Worst-average-best cases, Notations, Performance, Optimization, ...)
    - Implementation of algorithms (Searching, Sorting, Random, Loops, Divide-and-Conquer, ...)
    - Complex algorithms (Bit, Branch-and-bound, Graph, Geometric, Greedy algos)


**Contributions**
--------------
Whether if it is a code(in any programming language), an informational paragraph or just a simple term or definition for the dictionary, every contribution is always welcome! Our task is to learn and to teach, so if you want to contribute, just fork the repository, make your change in the fork and open a pull request so that I can accept and merge it if it's eligible for it. Also, do not hesitate to correct mistakes if you meet them.

---

*Note that some of the markdown files contain LaTeX math, therefore visibility is better in GitHub's light mode!*