#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;
using type = int;

void displayArray(vector<type> array) {
  for (const auto& v : array)
    std::cout << v << " ";
  std::cout << "\n";
}

void heapify(vector<type>& array, int n, int curr_idx) {
  int largest = curr_idx;
  int left = 2 * curr_idx + 1;
  int right = 2 * curr_idx + 2;

  if (left < n && array[left] > array[curr_idx])
    largest = left;

  if (right < n && array[right] > array[largest])
    largest = right;

  if (largest != curr_idx) {
    std::swap(array[curr_idx], array[largest]);
    heapify(array, n, largest);
  }
}

void heapSort(vector<type>& array) {
  for (int i = array.size() / 2; i > -1; i--) {
    heapify(array, array.size(), i);
  }

  for (int i = array.size() - 1; i > 0; i--) {
    std::swap(array[i], array[0]);
    heapify(array, i, 0);
  }
}

int main(int argc, char** argv) {
  vector<type> array{1, 12, 9, 5, 6, 10};
  std::cout << "Unsorted array: ";
  displayArray(array);
  std::cout << "Sorted array: ";
  heapSort(array);
  displayArray(array);
  return 0;
}