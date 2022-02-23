#include <algorithm>
#include <iostream>
#include <vector>

using type = int;

void printArray(std::vector<type>& array) {
  for (const auto& a : array)
    std::cout << a << " ";
  std::cout << "\n";
}

void countingSort(std::vector<type>& array, int place, type max) {
  std::vector<type> count(max + 1, 0);
  std::vector<type> output(array.size(), 0);
  int i{};

  for (i = 0; i < array.size(); i++)
    count[(array[i] / place) % 10] += 1;

  for (i = 1; i < max + 1; i++)
    count[i] += count[i - 1];

  for (i = array.size() - 1; i >= 0; i--) {
    output[count[(array[i] / place) % 10] - 1] = array[i];
    count[(array[i] / place) % 10]--;
  }

  for (i = 0; i < output.size(); i++)
    array[i] = output[i];
}

void radixSort(std::vector<type>& array) {
  auto max_iter = std::max_element(array.begin(), array.end());
  auto max = array[std::distance(array.begin(), max_iter)];
  std::cout << "Max element in array is " << max << "\n";

  for (int place = 1; max / place > 0; place *= 10)
    countingSort(array, place, max);
}

int main() {
  std::vector<type> array = {121, 432, 564, 23, 1, 45, 788, 33};
  printArray(array);
  radixSort(array);
  printArray(array);
}