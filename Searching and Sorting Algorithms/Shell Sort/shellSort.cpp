#include <iostream>
#include <vector>

using std::vector;
using type = int;

void printArray(const vector<type>& array) {
  for (const auto& v : array)
    std::cout << v << " ";
  std::cout << "\n";
}

void shellSort(vector<type>& array) {
  int size = array.size();
  int interval = size / 2;
  while (interval > 0) {
    for (int i = interval; i < size; i++) {
      type temp = array[i];
      int j = i;
      while (j >= interval && array[j - interval] > temp) {
        std::swap(array[j], array[j - interval]);
        j -= interval;
      }
      array[j] = temp;
    }
    interval /= 2;
  }
}

int main(int argc, char** argv) {
  vector<type> array{9, 8, 3, 7, 5, 6, 4, 1};
  std::cout << "Unsorted array: ";
  printArray(array);
  shellSort(array);
  std::cout << "Sorted array: ";
  printArray(array);
  return 0;
}