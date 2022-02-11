#include <algorithm>
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
void counting_sort(std::array<TYPE, SIZE>& array) {
  TYPE* max = std::max_element(array.begin(), array.end());
  std::array<TYPE, SIZE> count_array = {0};
  print_array(count_array);
  for (size_t j = 0; j < SIZE; j++){
      
  }
}

int main() {
  std::array<int, 7> foo_array = {6, 4, 9, 4, 3, 5, 1};
  print_array(foo_array);
  counting_sort(foo_array);
  print_array(foo_array);
}