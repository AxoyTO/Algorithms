**Bubble sort's main idea is to always compare two adjacent elements until they are not in the sorted order.**

### **Steps**
---
**1.** Starting from the first element in an array, compare the element with the element in the next index.

**2.** If the element is greater than the element in the index, then they are swapped.

**3.** Repeat the first and second steps until the next index is the last in the array.

**4.** Repeat the steps 1, 2 and 3 until the array is fully sorted.

### **Pseudocode**
---
```
bubbleSort(array)
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
end bubbleSort
```

In the above algorithm, all the comparisons are made even if the array is already sorted.

This increases the execution time.

To solve this, we can introduce an extra variable swapped. The value of `swapped` is set true if there `swapped` swapping of elements. Otherwise, it is set **false**.

After an iteration, if there is no swapping, the value of `swapped` will be **false**. This means elements are already sorted and there is no need to perform further iterations.

This will reduce the execution time and helps to optimize the bubble sort.

**Algorithm for optimized bubble sort is:**

```
bubbleSort(array)
  swapped <- false
  for i <- 1 to indexOfLastUnsortedElement-1
    if leftElement > rightElement
      swap leftElement and rightElement
      swapped <- true
end bubbleSort
```

### **Bubble Sort Complexity**
---
| **Time Complexity**  |        |
| -------------------- | :----: |
| Best                 |  O(n)  |
| Worst                | O(n^2) |
| Average              | O(n^2) |
| **Space Complexity** |  O(1)  |
| **Stability**        |  Yes   |


### **Time Complexities**
---

**Worst Case Complexity: O(n^2)**

If we want to sort in ascending order and the array is in descending order then the worst case occurs.

**Best Case Complexity: O(n)** 

If the array is already sorted, then there is no need for sorting.

**Average Case Complexity: O(n^2)** 

It occurs when the elements of the array are in jumbled order (neither ascending nor descending).

### **Space Complexity**
---
Space complexity is **O(1)** because an extra variable is used for swapping.
In the optimized bubble sort algorithm, two extra variables are used. Hence, the space complexity will be **O(2)**.

### **Bubble Sort Applications**
---
Bubble sort is used if
- complexity does not matter
- short and simple code is preferred