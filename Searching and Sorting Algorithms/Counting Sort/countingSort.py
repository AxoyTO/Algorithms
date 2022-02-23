def print_array(array):
    for i in array:
        print(i, end=" ")
    print("")


def counting_sort(array):
    maximum = max(array)
    count = [0] * (maximum+1)
    output = [0] * len(array)

    for i in range(len(array)):
        count[array[i]] += 1

    for i in range(1, maximum+1):
        count[i] += count[i-1]

    i = len(array) - 1
    while i >= 0:
        output[count[array[i]] - 1] = array[i]
        count[array[i]] -= 1
        i -= 1

    for i in range(len(output)):
        array[i] = output[i]


foo_array = [9, 4, 3, 5, 1, 8, 2, 7, 0, 6, 3, 2]
print_array(foo_array)
counting_sort(foo_array)
print_array(foo_array)
