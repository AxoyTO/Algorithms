#include <iostream>
#include <vector>

using type = int;

void printArray(const std::vector<type>& array) {
  for (const auto& v : array) {
    std::cout << v << " ";
  }
  std::cout << "\n";
}

void merge(std::vector<type>& array, int left, int middle, int right) {
  std::vector<type> left_arr(middle - left + 1, 0);
  std::vector<type> right_arr(right - middle, 0);

  for (int i = 0; i < left_arr.size(); i++)
    left_arr[i] = array[left + i];
  for (int j = 0; j < right_arr.size(); j++)
    right_arr[j] = array[middle + 1 + j];

  int i, j, k;
  i = 0;
  j = 0;
  k = left;

  while (i < left_arr.size() && j < right_arr.size()) {
    if (left_arr[i] < right_arr[j]) {
      array[k] = left_arr[i];
      i++;
    } else {
      array[k] = right_arr[j];
      j++;
    }
    k++;
  }

  while (i < left_arr.size()) {
    array[k] = left_arr[i];
    i++;
    k++;
  }

  while (j < right_arr.size()) {
    array[k] = right_arr[j];
    j++;
    k++;
  }
}

void mergeSort(std::vector<type>& array, int left, int right) {
  if (left < right) {
    int middle = left + (right - left) / 2;
    std::cout << "middle: " << middle << "\n";

    mergeSort(array, left, middle);
    mergeSort(array, middle + 1, right);

    merge(array, left, middle, right);
  }
}

int main(int argc, char** argv) {
  std::vector<type> array = {6, 5, 12, 10, 9, 1, 2, 6};
  std::cout << "Unsorted array:\n";
  printArray(array);
  mergeSort(array, 0, array.size() - 1);
  std::cout << "Sorted array:\n";
  printArray(array);

  return 0;
}