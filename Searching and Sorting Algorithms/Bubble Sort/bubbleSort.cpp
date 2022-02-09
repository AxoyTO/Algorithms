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
void bubble_sort(std::array<TYPE, SIZE>& array) {
  for (size_t i = 0; i < SIZE; i++) {
    bool swapped = false;
    for (size_t j = 0; j < SIZE - i - 1; j++) {
      if (array[j] > array[j + 1]) {
        TYPE temp = array[j + 1];
        array[j + 1] = array[j];
        array[j] = temp;
        swapped = true;
      }
    }
    if (!swapped)
      break;
  }
}

int main() {
  std::array<int, 7> foo_array = {6, 4, 9, 4, 3, 5, 1};
  print_array(foo_array);
  bubble_sort(foo_array);
  print_array(foo_array);
}