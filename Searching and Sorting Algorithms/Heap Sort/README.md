**Heap Sort is a popular and efficient sorting algorithm in computer programming. Heap Sort algorithm requires knowledge of two types of data structures - arrays and trees.**

**Heap sort works by visualizing the elements of the array as a special kind of complete binary tree called a heap.**

A complete binary tree has an interesting property that we can use to find the children and parents of any node.

If the index of any element in the array is `i`, the element in the index `2i+1` will become the left child and element in `2i+2` index will become the right child. Also, the parent of any element at index `i` is given by the lower bound of `(i-1)/2`.

Heap Data Structure in short
---
Heap is a special tree-based data structure. A binary tree is said to follow a heap data structure if
- It is a complete binary tree
- All nodes in the tree follow the property that they are greater than their children i.e. the largest element is at the root and both its children and smaller than the root and so on. Such a heap is called a `max-heap`. If instead, all nodes are smaller than their children, it is called a `min-heap`.

"Heapifying" a tree
---
Starting from a complete binary tree, we can modify it to become a `Max-Heap` by running a function called heapify on all the non-leaf elements of the heap. Heapify uses recursion.

```
heapify(array)
    Root = array[0]
    Largest = largest(array[0], array[2*0 + 1], array[2*0 + 2])
    if(Root != Largest)
        Swap(Root, Largest)
```

There are two scenarios for a binary tree of depth 2.
   1. The root is the largest element and there is no need to do anything.
   2. There is a larger child element than the root and we need to swap to maintain `Max-Heap` property.

The binary trees deeper than 2 levels should be sorted according to these scenarios 2 by 2 levels e.g. for a binary tree of level 3, the function should check for the scenarios at levels `root` and `root+1`, then `root+1` and `root+2`.

Combining these conditions in one "heapify" function would give:
```
void heapify(int arr[], int n, int i)
    // Find largest among root, left child and right child
    int largest = i
    int left = 2 * i + 1
    int right = 2 * i + 2

    if (left < n && arr[left] > arr[largest])
        largest = left
    
    if (right < n && arr[right] > arr[largest])
        largest = right

    if (largest != i){
        swap(arr[i], arr[largest])
        heapify(arr, n, largest)
    }
```

This function works for both the base case and for a tree of any size. We can thus move the root element to the correct position to maintain the max-heap status for any tree size as long as the sub-trees as max-heaps.

### **Steps of Heap Sort**
---
**1.** Heapify in order to get the tree in Max-Heap form.

**1.** Since the tree satisfies Max-Heap property, then the largest item is stored at the root node.

**2. Swap:** Remove the root element and put at the end of the array(nth position). Put the last item of the tree(heap) at the vacant place.

**3. Remove:** Reduce the size of the heap by 1

**4. Heapify:** Heapify the root element again so that we have the highest element at root.

**5.** The process is repeated until all the items of the list are sorted.
   
### **Pseudocode:**
---
```
    // Heap sort
    for (int i = n - 1; i >= 0; i--) {
      swap(&arr[0], &arr[i]);

      // Heapify root element to get highest element at root again
      heapify(arr, i, 0);
    }
```
---
| **Time Complexity**  |          |
| -------------------- | -------- |
| **Best**             | O(nlogn) |
| **Worst**            | O(nlogn) |
| **Average**          | O(nlogn) |
| **Space Complexity** | O(1)     |
| **Stability**        | No       |
---

Heap Sort has `O(nlogn)` time complexities for all the cases(best case, average case, and worst case) .

The height of a complete binary tree containing n elements is `logn`.

To fully heapify an element whose subtrees are already max heaps, we need to keep comparing the element with its left and right children and pushing it downwards until it reaches a point where both its children are smaller than it.

In the worst case scenario, we will need to move an element from the root to the leaf node making a multiple of `logn` comparisons and swaps.

During the heapify stage, we do that for `n/2` elements so the worst case complexity of the heapify is `n/2*logn ~ nlogn`.

During the sorting step, we exchange the root element with the last element and heapify the root element. For each element, this again takes `logn` worst time because we might have to bring the element all the way from the root to the leaf. Since we repeat this `n` times, the heap sort step is also `nlogn`.

Also since the `heapify` and `heap sort` steps are executed one after another, the algorithmic complexity is not multiplied and it remains in the order of `nlogn`.

Also it performs sorting in `O(1)` space complexity. Compared with Quick Sort, it has a better worst case `O(nlogn)`. Quick Sort has complexity `O(n^2)` for worst case. But in other cases, Quick Sort is fast. Introsort is an alternative to heapsort that combines quicksort and heapsort to retain advantages of both: worst case speed of heapsort and average speed of quicksort.


**Heap Sort Applications**
---
Systems concerned with security and embedded systems such as Linux Kernel use Heap Sort because of the O(n log n) upper bound on Heapsort's running time and constant O(1) upper bound on its auxiliary storage.

Although Heap Sort has O(n log n) time complexity even for the worst case, it doesn't have more applications ( compared to other sorting algorithms like Quick Sort, Merge Sort ). However, its underlying data structure, heap, can be efficiently used if we want to extract the smallest (or largest) from the list of items without the overhead of keeping the remaining items in the sorted order. For e.g Priority Queues.