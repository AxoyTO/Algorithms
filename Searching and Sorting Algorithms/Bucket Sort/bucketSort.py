from math import ceil


def bucketSort(array):
    buckets = []

    for i in range(len(array)):
        buckets.append([])

    for i in array:
        bucket_index = int(ceil(i/len(array)))
        if i < 0:
            bucket_index = 0
        elif i >= 0 and i <= 1:
            bucket_index = 0
        buckets[bucket_index].append(i)

    for i in range(len(array)):
        buckets[i] = sorted(buckets[i])

    k = 0
    for i in range(len(buckets)):
        for j in range(len(buckets[i])):
            array[k] = buckets[i][j]
            k += 1


def bucketSortFloats(array):
    buckets = []
    for i in range(len(array)):
        buckets.append([])

    for i in array:
        bucket_index = int(10*i)
        buckets[bucket_index].append(i)

    for i in range(len(buckets)):
        buckets[i] = sorted(buckets[i])

    k = 0
    for i in range(len(array)):
        for j in range(len(buckets[i])):
            array[k] = buckets[i][j]
            k += 1


array = [11, 2, -4, 21, 8, -13, 0.1, 17, 19, 13, 1, 24, 12]
#floats = [.42, .32, .33, .52, .37, .47, .51]
print("Unsorted Array")
print(array)
# print(floats)
bucketSort(array)
# bucketSortFloats(floats)
print("Sorted Array")
print(array)
# print(floats)
