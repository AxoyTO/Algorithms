**Bucket Sort is a sorting algorithm that divides the unsorted array elements into several groups called buckets. Each bucket is  then sorted by using any of the suitable sorting algorithms or recursively applying the same bucket algorithm. Finally, the sorted buckets are combined to form a final sorted array.**

**The process of Bucket Sort can be understood as a `scatter-gather` approach. Here, elements are first scattered into buckets then the elements in each bucket are sorted. Finally, the elements are gathered in order.**


### **Steps**
---
**1.** Suppose, the input array `A = [11, 9, 21, 8, 17, 19, 13, 1, 24, 12]`. Create an array of size 5. Each slot of this array is used as a bucket for storing elements.

**2.** Insert elements into the buckets from the array. The elements are inserted according to the range of the bucket.

For this example, we have buckets each of ranges from 0 to 5, 5 to 10, 10 to 15, ..., 20 to 25.

**3.** The elements of each bucket are sorted using any of the stable sorting algorithms.

**4.** The elements from each bucket are gathered. It is done by iterating through the bucket and inserting an individual element into the original array in each cycle. The element from the bucket is erased once it is copied into the original array.
   
### **Pseudocode:**
---
```
bucketSort()
  create N buckets each of which can hold a range of values
  for all the buckets
    initialize each bucket with 0 values
  for all the buckets
    put elements into buckets matching the range
  for all the buckets 
    sort elements in each bucket
  gather elements from each bucket
end bucketSort
```
---
| **Time Complexity**  |        |
| -------------------- | ------ |
| **Best**             | O(n+k) |
| **Worst**            | O(n^2) |
| **Average**          | O(n)   |
| **Space Complexity** | O(n+k) |
| **Stability**        | Yes    |
---

**Time Complexities:**
---

**Worst Case Complexity: O(n^2)**

When there are elements of close range in the array, they are likely to be placed in the same bucket. This may result in some buckets having more number of elements than the others. It makes the complexity depend on the sorting algorithm used to sort the elements of the bucket. The complexity becomes even worse when the elements are in reverse order. If insertion sort is used to sort elements of the bucket, then the time complexity becomes O(n^2)

**Best Case Complexity: O(n+k)**

It occurs when the elements are uniformly distributed in teh buckets with a nearly equal number of elements in each bucket. The complexity becomes even better if the elements inside the buckets are already sorted. If insertion sort is used to sort elements of a bucket then the overall complexity in the best case will be linear i.e. `O(n+k)`. `O(n)` is the complexity for making the buckets and `O(k)` is the complexity for sorting the elements of the bucket using algorithms having linear time complexity at the best case.

**Average Case Complexity: O(n)**

It occurs when the elements are distributed randomly in the array. Even if the elements are not distributed uniformly, bucket sort runs in linear time. It holds true until the sum of the squares of the bucket sizes is linear in the total number of elements.

**Bucket Sort Applications**
---

- input is uniformly distributed over a range
- there are floating point values