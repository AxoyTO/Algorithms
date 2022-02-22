**Binary Search is a searching algorithm for finding an element's position in a sorted array.
In this approach, the element is always searched in the middle of a portion of an array.**
    
    Binary search can be implemented only on a sorted list of items.
    If the elements are not sorted already, we need to sort them first.

### **Binary Search Methods**
---
Binary Search Algorithm can be implemented in two ways
1. Iterative Method
2. Recursive Method

The recursive method follows the **divide and conquer** approach.


### **Steps**
---
**1.** Let there be an array `A = [3, 4, 5, 6, 7, 8, 9]` in which we'll perform the searching and let `x = 4` is the element we are searching.

**2.** Set two pointers `low` and `high` at the lowest and the highest positions respectively.

**3.** Find the middle element of the array i.e. `A[(low+high)/2] = 6`.

**4.** If `x == mid`, then return mid. Else, compare the element to be searched with mid.

**5.** If `x > mid`, compare `x` with the middle element of the elements on the right side of `mid`. This is done by setting `low` to `low = mid + 1`

**6.** Else, compare `x` with the middle element of the elements to the left of `mid`. This is done by setting `high` to `high = mid - 1`

**7.** Repeat steps 3 to 6 until low meets high.

### **Pseudocode:**
---
##### Iteration method
```
do until the pointers low and high meet each other.
    mid = (low + high)/2
    if (x == arr[mid])
        return mid
    else if (x > arr[mid]) // x is on the right side
        low = mid + 1
    else                       // x is on the left side
        high = mid - 1
```

##### Recursive method
```
binarySearch(arr, x, low, high)
    if low > high
        return False 
    else
        mid = (low + high) / 2 
        if x == arr[mid]
            return mid
        else if x > arr[mid]        // x is on the right side
            return binarySearch(arr, x, mid + 1, high)
        else                               // x is on the right side
            return binarySearch(arr, x, low, mid - 1)
```

| **Time Complexity**  |         |
| -------------------- | ------- |
| **Best**             | O(1)    |
| **Worst**            | O(logN) |
| **Average**          | O(logN) |
| **Space Complexity** | O(1)    |



**Binary Search Applications**
---
- In libraries of Java, .Net, C++ STL
- While debugging, the binary search is used to pinpoint the place where the error happens.