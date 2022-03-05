def shellSort(array):
    size = len(array)
    interval = size//2
    while interval > 0:
        for i in range(interval, size):
            temp = array[i]
            j = i
            while j >= interval and array[j-interval] > temp:
                array[j] = array[j-interval]
                j -= interval

            array[j] = temp
        interval //= 2


array = [9, 8, 3, 7, 5, 6, 4, 1]
print("Unsorted Array:", array)
shellSort(array)
print("Sorted Array:", array)
