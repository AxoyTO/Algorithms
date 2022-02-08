**Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.**

It works like just as if we were sorting cards in our hand in a card game. Assuming that the first card is already sorted, we pick an unsorted card from the deck. If the unsorted card is greater than the card in our hand, then we put it behind. Otherwise, we put it on top of the cards in our hand.

A similar approach is used by insertion sort

**Steps**:
**1.** The first element in the array is assumed to be sorted. Take the second element and store it separately in `key`. Compare this `key` with the first element. If the first element is greater than `key`, then `key` is placed in front of the first element.
**2.** Now that the first two elements are sorted, take the third element and compare it with the elements on the left to it. Place it just behind the maximum of the elements smaller than it. If there is no such element, then place it at the beginning.
**3.** Similarly repeat the steps for each unsorted element until the array becomes fully sorted.



### Pseudocode:**
---
```
insertionSort(array)
  mark first element as sorted
  for each unsorted element X
    'extract' the element X
    for j <- lastSortedIndex down to 0
      if current element j > X
        move sorted element to the right by 1
    break loop and insert X here
end insertionSort
```
### Insertion Sort Complexity
---
| **Time Complexity**  |                                                                                                           |
| -------------------- | :-------------------------------------------------------------------------------------------------------: |
| Best                 |  <img src="https://render.githubusercontent.com/render/math?math=\O(\n)" style="background-color:white">  |
| Worst                | <img src="https://render.githubusercontent.com/render/math?math=\O(\n^2)" style="background-color:white"> |
| Average              | <img src="https://render.githubusercontent.com/render/math?math=\O(\n^2)" style="background-color:white"> |
| **Space Complexity** |  <img src="https://render.githubusercontent.com/render/math?math=\O(1)" style="background-color:white">   |
| **Stability**        |                                                    Yes                                                    |

### Time Complexities
---
##### Worst Case Complexity: <img src="https://render.githubusercontent.com/render/math?math=\O(\n^2)" style="background-color:white">
Suppose, an array is in ascending order, and you want to sort it in descending order. In this case, worst case complexity occurs.

Each element has to be compared with each of the other elements so, for every n-th element, <img src="https://render.githubusercontent.com/render/math?math=n-1" style="background-color:white"> number of comparisons are made.

Thus, the total number of comparisons = <img src="https://render.githubusercontent.com/render/math?math=n*(n-1)\hspace{2mm}~\hspace{2mm}n^2" style="background-color:white">
##### Best Case Complexity: <img src="https://render.githubusercontent.com/render/math?math=\O(\n)" style="background-color:white">
When the array is already sorted, the outer loop runs for n number of times whereas the inner loop does not run at all. So, there are only n number of comparisons. Thus, complexity is linear.

##### Average Case Complexity: <img src="https://render.githubusercontent.com/render/math?math=\O(\n^2)" style="background-color:white">
It occurs when the elements of an array are in jumbled order (neither ascending nor descending).
##### Space Complexity

Space complexity is <img src="https://render.githubusercontent.com/render/math?math=\O(1)" style="background-color:white"> because an extra variable key is used.