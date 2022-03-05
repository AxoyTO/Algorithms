import random


def linearSearch(array, x):
    for i in range(len(array)):
        if array[i] == x:
            return i

    return -1


if __name__ == "__main__":
    array = [random.randint(0, 100) for _ in range(25)]
    existing_num_to_search = 100
    non_existing_num_to_search = 101

    array[len(array) // 2] = existing_num_to_search

    print("Array:", array)
    index = linearSearch(array, existing_num_to_search)
    if index != -1:
        print(f"Element {existing_num_to_search} is at index {index}.")
    else:
        print(f"Element {existing_num_to_search} not found.")

    if linearSearch(array, non_existing_num_to_search) == -1:
        print(f"Element {non_existing_num_to_search} not found.")
