#include <algorithm>
#include <iostream>
#include <typeinfo>
#include <vector>

using Type = int;

void printArray(std::vector<Type> array) {
  for (const auto& i : array) {
    std::cout << i << " ";
  }
  std::cout << "\n";
}

void countingSort(std::vector<Type>& array) {
  auto max_iter = std::max_element(array.begin(), array.end());
  const int max = array[std::distance(array.begin(), max_iter)];
  std::cout << "Maximum element is " << max << "\n";
  std::vector<Type> output(array.size(), 0);
  std::vector<Type> count(max + 1, 0);
  for (size_t i = 0; i < array.size(); i++)
    count[array[i]] += 1;

  for (size_t i = 1; i < max + 1; i++) {
    count[i] += count[i - 1];
  }

  int i = array.size() - 1;
  while (i >= 0) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
    i -= 1;
  }

  for (i = 0; i < output.size(); i++) {
    array[i] = output[i];
  }
}

int main() {
  std::vector<Type> array = {6, 4, 9, 4, 3, 5, 1, 14, 7};
  printArray(array);
  countingSort(array);
  printArray(array);
}