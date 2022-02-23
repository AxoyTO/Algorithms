#include <algorithm>
#include <iostream>
#include <vector>

using type = int;

void printArray(const std::vector<type>& array) {
  for (const auto& v : array)
    std::cout << v << " ";
  std::cout << "\n";
}

int partition(std::vector<type>& array, int low, int high) {
  int pivot = array[high];
  // std::cout << "pivot: " << pivot << "\n";

  int greater_element_index = low - 1;

  for (int i = low; i < high; i++) {
    if (array[i] <= pivot) {
      greater_element_index++;
      // std::cout << array[greater_element_index] << " <-> " << array[i] <<
      // "\n";
      std::swap(array[greater_element_index], array[i]);
    }
  }

  // std::cout << array[greater_element_index + 1] << " <---> " << array[high]
  // <<
  // "\n";
  std::swap(array[greater_element_index + 1], array[high]);

  return (greater_element_index + 1);
}

void quickSort(std::vector<type>& array, int low, int high) {
  if (low < high) {
    int pivot = partition(array, low, high);
    // printArray(array);
    quickSort(array, low, pivot - 1);
    quickSort(array, pivot + 1, high);
  }
}

int main() {
  std::vector<type> array = {8, 7, 6, 1, 0, 9, 2};

  std::cout << "Unsorted Array: \n";
  printArray(array);

  // perform quicksort on data
  quickSort(array, 0, array.size() - 1);

  std::cout << "Sorted array in ascending order: \n";
  printArray(array);
}