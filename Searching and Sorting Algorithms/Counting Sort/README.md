**Counting sort is a sorting algorithm that sorts the elements of an array by counting the number of occurrences of each unique element in the array. The count is stored in an auxiliary array and the sorting is done by mapping the count as an index of the auxiliary array.**

### **Steps**
---
**1.** Find out the maximum element (let it be `max`) from the given array.

**2.** Initialize an array of length `max+1` with all elements 0. This array is used for storing the count of the elements in the array.

**3.** Store the count of each element at their respective index in `count` array

**4.** Store cumulative sum of the elements of the count array. It helps in placing the elements into the correct index of the sorted array.

**5.** Find the index of each element of the original array in the count array. This gives the cumulative count. Place the element at the index calculated as shown in figure below.

**6.** After placing each element at its correct position, decrease its count by one.

### **Pseudocode:**
---
```
countingSort(array, size)
  max <- find largest element in array
  initialize count array with all zeros
  for j <- 0 to size
    find the total count of each unique element and 
    store the count at jth index in count array
  for i <- 1 to max
    find the cumulative sum and store it in count array itself
  for j <- size down to 1
    restore the elements to array
    decrease count of each element restored by 1
end countingSort
```

| **Time Complexity**  |        |
| -------------------- | ------ |
| **Best**             | O(n+k) |
| **Worst**            | O(n+k) |
| **Average**          | O(n+k) |
| **Space Complexity** | O(max) |
| **Stability**        | Yes    |


**Time Complexities**
---
There are mainly four main loops. (Finding the greatest value can be done outside the function.)

| for-loop | time of counting |
| -------- | ---------------- |
| 1st      | O(max)           |
| 2nd      | O(size)          |
| 3rd      | O(max)           |
| 4th      | O(size)          |
Overall complexity = O(max)+O(size)+O(max)+O(size) = O(max+size)

**Worst Case Complexity: O(n+k)**

**Best Case Complexity: O(n+k)**

**Average Case Complexity: O(n+k)**

In all the above cases, the complexity is the same because no matter how the elements are placed in the array, the algorithm goes through **n+k** times.

There is no comparison between any elements, so it is better than comparison based sorting techniques. But, it is bad if the integers are very large because the array of that size should be made.

**Space Complexity**
---

The space complexity of Counting Sort is **O(max)**. Larger the range of elements, larger is the space complexity.

**Counting Sort Applications**
---
Counting sort is used when:

- there are smaller integers with multiple counts.
- linear complexity is the need.