Bubble sort's main idea is to always compare two adjacent elements until they are not in the sorted order.

### **Steps**
---
**1.** Starting from the first element in an array, compare the element with the element in the next index.

**2.** If the element is greater than the element in the index, then they are swapped.

**3.** Repeat the first and second steps until the next index is the last in the array.

**4.** Repeat the steps 1, 2 and 3 until the array is fully sorted.

### **Pseudecode**
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
| **Time Complexity**  |                                                                                                           |
| -------------------- | :-------------------------------------------------------------------------------------------------------: |
| Best                 |  <img src="https://render.githubusercontent.com/render/math?math=\O(\n)" style="background-color:white">  |
| Worst                | <img src="https://render.githubusercontent.com/render/math?math=\O(\n^2)" style="background-color:white"> |
| Average              | <img src="https://render.githubusercontent.com/render/math?math=\O(\n^2)" style="background-color:white"> |
| **Space Complexity** |  <img src="https://render.githubusercontent.com/render/math?math=\O(1)" style="background-color:white">   |
| **Stability**        |                                                    Yes                                                    |


### **Time Complexities**
---

**Worst Case Complexity:** <img src="https://render.githubusercontent.com/render/math?math=\O(\n^2)" style="background-color:white">

If we want to sort in ascending order and the array is in descending order then the worst case occurs.

**Best Case Complexity:** <img src="https://render.githubusercontent.com/render/math?math=\O(\n)" style="background-color:white">

If the array is already sorted, then there is no need for sorting.

**Average Case Complexity:** <img src="https://render.githubusercontent.com/render/math?math=\O(\n^2)" style="background-color:white">

It occurs when the elements of the array are in jumbled order (neither ascending nor descending).

### **Space Complexity**
---
Space complexity is O(1) because an extra variable is used for swapping.
In the optimized bubble sort algorithm, two extra variables are used. Hence, the space complexity will be O(2).