def iterativeBinarySearch(array, x):
    low, high = 0, len(array)-1
    while high >= low:
        mid = int((low+high)/2)
        if array[mid] == x:
            return mid
        elif array[mid] > x:
            high = mid-1
        else:
            low = mid+1
    pass


array = [3, 4, 5, 6, 7, 8, 9]
x = 4

result = iterativeBinarySearch(array, x)

if result != -1:
    print("Element is present at index " + str(result))
else:
    print("Not found")
