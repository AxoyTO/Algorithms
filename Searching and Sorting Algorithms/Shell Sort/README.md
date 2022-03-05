**Shell sort is a generalized version of the `insertion sort algorithm`. It first sorts elements that are far apart from each other and successively reduces the interval between the elements to be sorted.**

**The interval between the elements is reduced based on the sequence used. Some of the optimal sequences that can be used in the shell sort algorithm are:**
-   **Shell's original sequence:** `N/2, N/4, ..., 1`
-   **Knuth's increments:** `1, 4, 13, ..., (3^k - 1)/2`
-   **Sedgewick's increments:** `1, 8, 23, 77, 281, 1073, 4193, 16577, ..., 4*j + 1 + 3*2*j + 1`
-   **Hibbard's increments:** `1, 3, 7, 15, 31, 63, 127, 255, 511, ...`
-   **Papernov & Stasevich increment:** `1, 3, 5, 9, 17, 33, 65, ...`
-   **Pratt:** `1, 2, 3, 4, 6, 9, 8, 12, 18, 27, 16, 24, 36, 54, 81, ...`

***The performance of the shell sort depends on the type of sequence used for a given input array.***

### **Steps**
---
**1.** Suppose, we need to sort the array `[9, 8, 3, 7, 5, 6, 4, 1]`

**2.** We are using the shell's original sequence `N/2, N/4, ..., 1` as intervals in our algorithm.

In the first loop, if the array size is `N = 8` then, the elements lying at the interval of `N/2 = 4` are compared and swapped if they are not in order.
- The `0th` element is compared with the `4th` element.
- If the `0th` element is greater than the `4th` one, then the `4th`
element is first stored in `temp` variable and the `0th` element(i.e. greater element) is stored in the `4th` position and the element stored in `temp` is stored in the `0th` position.

This process goes on for all the remaining elements.


**3.** In the second loop, an interval of `N/4 = 8/4 = 2` is taken and again the elements lying at these intervals are sorted. The elements at `4th` and `2nd` position are compared. The elements at `2nd` and `0th` position are also compared. All the elements in the array lying at the current interval are compared.

**4.** The same process goes on for remaining elements.

**5.** Finally, when the interval is `N/8 = 8/8 = 1` then the array elements lying at the interval of 1 are sorted. The array is now completely sorted.
   
### **Pseudocode:**
---
```
shellSort(array, size)
  for interval i <- size/2n down to 1
    for each interval "i" in array
        sort all the elements at interval "i"
end shellSort
```
---
| **Time Complexity**  |        |
| -------------------- | ------ |
| **Best**             | O(nlogn) |
| **Worst**            | O(n^2) |
| **Average**          | O(nlogn)   |
| **Space Complexity** | O(1) |
| **Stability**        | No    |
---

**Shell sort is an unstable sorting algorithm because this algorithm does not examine the elements lying in between the intervals.**

**Time Complexities:**
---

**Worst Case Complexity: less than or equal to O(n^2)**

Worst case complexity for shell sort is always less than or equal to `O(n^2)`. According to `Poonen Theorem`, worst case complexity for shell sort is `O(Nlog(N))^2 / (log(log(N))^2)` or `O(Nlog(N))^2/log(log(N))` or `O(N(log(N)^2)` or something in between.

**Best Case Complexity: O(nlog(n))**

When the array is already sorted, the total number of comparisons for each interval(or increment) is equal to the size of the array.

**Average Case Complexity: O(nlog(n))**

The complexity depends on the interval chosen. The above complexities differ for different increment sequences chosen. Best increment sequence is unknown.

**Space Complexity:** The space complexity for shell sort is `O(1)`.

**Shell Sort Applications**
---
Shell sort is used when:
- calling a stack is overhead. `uClibc` library uses this sort.
- recursion exceeds a limit. `bzip2` compressor uses it.
- Insertion sort does not perform well when the close elements are far apart. Shell sort helps in reducing the distance between the close elements. Thus, there will be less number of swappings to be performed.