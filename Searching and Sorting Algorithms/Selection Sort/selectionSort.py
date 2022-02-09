def print_array(array: list):
    for i in array:
        print(i, end=" ")
    print("")


def selection_sort(array: list):
    for i in range(len(array)-1):
        min_index = i
        for j in range(i+1, len(array)):
            if array[j] < array[min_index]:
                min_index = j

        array[i], array[min_index] = array[min_index], array[i]


foo_array = [9, 1, 3, 2, 8, 10, 0]
print_array(foo_array)
selection_sort(foo_array)
print_array(foo_array)
