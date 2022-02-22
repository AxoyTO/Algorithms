def binarySearch(array, x, low, high):
    if high >= low:
        mid = int((low+high)/2)
        if array[mid] == x:
            return mid
        else:
            if array[mid] > x:
                return binarySearch(array, x, low, mid-1)
            else:
                return binarySearch(array, x, mid+1, high)
        pass

    else:
        return -1
    pass


array = [3, 4, 5, 6, 7, 8, 9]
x = 4

result = binarySearch(array, x, 0, len(array)-1)

if result != -1:
    print("Element is present at index " + str(result))
else:
    print("Not found")
