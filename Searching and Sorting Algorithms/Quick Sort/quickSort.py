
def printArray(array):
    for i in array:
        print(i, end=" ")
    print()


def partition(array, low, high):
    pivot = array[high]
    greater_element_index = low - 1
    for i in range(low, high):
        if array[i] <= pivot:
            greater_element_index += 1
            (array[greater_element_index], array[i]) = (
                array[i], array[greater_element_index])

    (array[greater_element_index+1], array[high]) = (
        array[high], array[greater_element_index+1])

    return greater_element_index+1


def quickSort(array, low, high):
    if low < high:
        pivot = partition(array, low, high)
        quickSort(array, low, pivot-1)
        quickSort(array, pivot+1, high)
    pass


if __name__ == '__main__':
    array = [8, 7, 6, 1, 0, 9, 2]
    print("Unsorted Array:\n", array)
    quickSort(array, 0, len(array)-1)
    print("Sorted array in ascending order:\n", array)
