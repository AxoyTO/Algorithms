//#include <algorithm>
#include <array>
#include <iostream>

template <typename TYPE, size_t SIZE>
void print_array(std::array<TYPE, SIZE> array) {
  for (const auto& i : array) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}

template <typename TYPE, size_t SIZE>
void selection_sort(std::array<TYPE, SIZE>& array) {
  for (size_t i = 0; i < SIZE - 1; i++) {
    TYPE min_index = i;
    for (size_t j = i; j < SIZE; j++) {
      if (array[j] < array[min_index])
        min_index = j;
    }

    std::swap(array[i], array[min_index]);
  }
}

int main() {
  std::array<int, 7> foo_array = {6, 4, 9, 4, 3, 5, 1};
  print_array(foo_array);
  selection_sort(foo_array);
  print_array(foo_array);
}