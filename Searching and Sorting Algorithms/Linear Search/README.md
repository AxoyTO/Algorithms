**Linear Search is a sequential searching algorithm where we start from one end and check every element of the list until the desired element is found. It is the simplest searching algorithm**


### **Steps**
--- 
Suppose, we are searching an element `k` in an array `arr`.

**1.** Starting from the first element, we compare the element `k` with each element `x` of array `arr`.

**2.** If `x == k`, we return the index.


**3.** Else, return `not found`.
   
### **Pseudocode:**
---
```
LinearSearch(array, key)
  for each item in the array
    if item == value
      return its index
```
---

**Linear Search Complexities:**
---

**Time Complexity:** `O(n)`

**Space Complexity:** `O(1)`.

**Linear Search Applications**
---
Linear search is used:
1. For searching operations in small arrays.