#include <array>
#include <iostream>

template <typename T, std::size_t SIZE>
void print_array(std::array<T, SIZE> array) {
  for (const auto& v : array) {
    std::cout << v << " ";
  }
  std::cout << "\n";
}

template <typename T, std::size_t SIZE>
void insertion_sort(std::array<T, SIZE>& array) {
  for (size_t i = 1; i < array.size(); i++) {
    int key = array[i];
    int j = i - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
  }
}

int main() {
  std::array<int, 5> foo_array = {9, 5, 1, 4, 3};
  print_array(foo_array);
  insertion_sort(foo_array);
  print_array(foo_array);
  return 0;
}