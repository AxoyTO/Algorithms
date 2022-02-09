def print_array(array):
    for i in array:
        print(i, end=" ")
    print("")


def bubble_sort(array):
    for i in range(len(array)):
        swapped = False

        for j in range(0, len(array)-i-1):
            if array[j] >= array[j+1]:
                tmp = array[j+1]
                array[j+1] = array[j]
                array[j] = tmp
                swapped = True

        if not swapped:
            break


foo_array = [9, 4, 3, 5, 1]
print_array(foo_array)
bubble_sort(foo_array)
print_array(foo_array)
