**Quicksort is a sorting algorithm based on the `divide and conquer` approach where:**
1. An array is divided into subarrays by selecting a pivot element(element selected from the array).
   While dividing the array, the pivot element should be positioned in such a way that elements less than pivot are kept on the left side and elements greater than pivot are on the right side of the pivot.
2. The left and right subarrays are also divided using the same approach. This process continues until each subarray contains a single element.
3. At this point, elements are already sorted. Finally, elements are combined to form a sorted array.


### **Steps**
---
**1. Select the pivot element.**

There are different variations of quicksort where the pivot element is selected from different positions.

**2. Rearrange the array.**

Rearrange the array, so that elements that are smaller than the pivot will be put on the left and the elements greater than the pivot will be put on the right.

**Steps of rearranging the array:**
   1.  A pointer is fixed at the pivot element. The pivot element is compared with the elements beginning from the first index.
   2.  If the element is greater than the pivot element, a secnd pointer is set for that element.
   3.  Now, pivot is compared with other elements. If an element smaller than the pivot element is reached, the smaller element is swapped with the greater element found earlier.
   4.  Again, the process is repeated to set the next greater element as the second pointer and swap it with another smaller element.
   5.  The process goes on until the second last element is reached.
   6.  Finally, the pivot element is swapped with the second pointer.


**3. Divide Subarrays**

Pivot elements are again chosen for the left and the right subarrays separately. And step 2 is repeated. The subarrays are divided until each subarray is formed of a single element. At this point, the array is already sorted.


### **Pseudocode:**
---
```
quickSort(array, leftmostIndex, rightmostIndex)
  if (leftmostIndex < rightmostIndex)
    pivotIndex <- partition(array,leftmostIndex, rightmostIndex)
    quickSort(array, leftmostIndex, pivotIndex - 1)
    quickSort(array, pivotIndex, rightmostIndex)

partition(array, leftmostIndex, rightmostIndex)
  set rightmostIndex as pivotIndex
  storeIndex <- leftmostIndex - 1
  for i <- leftmostIndex + 1 to rightmostIndex
  if element[i] < pivotElement
    swap element[i] and element[storeIndex]
    storeIndex++
  swap pivotElement and element[storeIndex+1]
return storeIndex + 1
```
---
| **Time Complexity**  |             |
| -------------------- | ----------- |
| **Best**             | O(n*log(n)) |
| **Worst**            | O(n^2)      |
| **Average**          | O(n*log(n)) |
| **Space Complexity** | O(log(n))   |
| **Stability**        | Yes         |
---

**Time Complexities:**
---

**Worst Case Complexity[Big-O]: O(n^2)**

It occurs when the pivot element picked is either the greatest or the smallest element.

This condition leads to the case in which the pivot element lies in an extreme end of the sorted array. One sub-array is always empty and another sub-array contains `n-1` elements. Thus, quicksort is called only on this sub-array.

However, the quicksort algorithm has better performance for scattered pivots.

**Best Case Complexity[Big-omega]: O(n*log(n))**

It occurs when the pivot element is always the middle element or near to the middle element.

**Average Case Complexity[Big-theta]: O(n*log(n))**

It occurs when the above conditions do not occur.

**Space Complexity:**
---

The space complexity for quicksort is `O(log(n))`

**Quicksort Applications**
---
Quicksort algorithm is used when:

- the programming language is good for recursion
- time complexity matters
- space complexity matters