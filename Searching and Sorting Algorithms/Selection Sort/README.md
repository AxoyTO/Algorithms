**Selection sort is a sorting algorithm that selects the smallest element from an unsorted list in each iteration and places that element at the beginning of the unsorted list.**

**Steps**
---
**1.** Set the first element as `minimum`.

**2.** Compare `minimum` with the second element. If the second element is smaller than `minimum`, assign the second element as `minimum`

Compare `minimum` with the third element. Again, if the third element is smaller, then assign `minimum` to the third element otherwise do nothing. The process goes on until the last element.

**3.** After each iteration, `minimum` is placed in the front of the unsorted list.

**4.** For each iteration, indexing starts from the first unsorted element. Step 1 to 3 are repeated until all the elements are placed at their correct positions.

**Pseudocode:**
---
    selectionSort(array, size)
    repeat (size - 1) times
    set the first unsorted element as the minimum
    for each of the unsorted elements
        if element < currentMinimum
        set element as new minimum
    swap minimum with first unsorted position
    end selectionSort

| **Time Complexity**  |        |
| -------------------- | ------ |
| **Best**             | O(n^2) |
| **Worst**            | O(n^2) |
| **Average**          | O(n^2) |
| **Space Complexity** | O(1)   |
| **Stability**        | No     |

**Time Complexities:**
---

**Worst Case Complexity: O(n^2)**

If we want to sort in ascending order and the array is in descending order then, the worst case occurs.

**Best Case Complexity: O(n^2)**

It occurs when the array is already sorted

**Average Case Complexity: O(n^2)**

It occurs when the elements of the array are in jumbled order (neither ascending nor descending).
The time complexity of the selection sort is the same in all cases. At every step, you have to find the minimum element and put it in the right place. The minimum element is not known until the end of the array is not reached.

**Space Complexity:**
---

Space complexity is **O(1)** because an extra variable temp is used.

**Selection Sort Applications**
---
The selection sort is used when

- a small list is to be sorted
- cost of swapping does not matter
- checking of all the elements is compulsory
- cost of writing to a memory matters like in flash memory (number of writes/swaps is **O(n)** as compared to **O(n^2)** of bubble sort)
