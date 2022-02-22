#include <iostream>
#include <vector>

using Type = int;

template <typename T>
int iterativeBinarySearch(const std::vector<T>& vector, const T x) {
  int high = vector.size() - 1;
  int low = 0;
  while (high >= low) {
    int mid = (low + high) / 2;
    if (vector[mid] == x)
      return mid;
    else if (vector[mid] > x)
      high = mid - 1;
    else
      low = mid + 1;
  }

  return -1;
}

int main() {
  std::vector<Type> vector = {3, 4, 5, 6, 7, 8, 9};
  Type x = 4;
  int result = iterativeBinarySearch(vector, x);
  if (result == -1)
    std::cout << "Element not found"
              << "\n";
  else
    std::cout << "Element is found at index " << result << "\n";
}