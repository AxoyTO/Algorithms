
def mergeSort(array):
    if len(array) > 1:

        # divisor is the point where the array is divided into two subarrays
        divisor = len(array)//2
        left = array[:divisor]
        right = array[divisor:]

        # Sort the two halves
        mergeSort(left)
        mergeSort(right)

        i = j = k = 0

        # Until we reach either end of either left or right, pick smaller
        # among elements left and right and place them in the correct position at A[p,...,r]
        while i < len(left) and j < len(right):
            if left[i] < right[j]:
                array[k] = left[i]
                i += 1
            else:
                array[k] = right[j]
                j += 1
            k += 1

        # When we run out of elements in either left or right,
        # pick up the remaining elements and put in A[p,...,r]
        while i < len(left):
            array[k] = left[i]
            i += 1
            k += 1

        while j < len(right):
            array[k] = right[j]
            j += 1
            k += 1


if __name__ == '__main__':
    array = [6, 5, 12, 10, 9, 1, 2]
    print(array)
    mergeSort(array)
    print(array)
