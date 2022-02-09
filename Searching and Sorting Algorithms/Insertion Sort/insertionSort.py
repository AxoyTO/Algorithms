def print_array(array):
    for i in array:
        print(i, end=' ')
    print("")


def insertion_sort(array):
    for i in range(1, len(array)):
        key = array[i]
        j = i-1

        while j >= 0 and key < array[j]:
            array[j+1] = array[j]
            j -= 1

        array[j+1] = key


foo_array = [9, 5, 1, 4, 3]
print_array(foo_array)
insertion_sort(foo_array)
print_array(foo_array)
