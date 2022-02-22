#include <iostream>
#include <vector>

using Type = int;

template <typename T>
int binarySearch(const std::vector<T>& vector, T x, int low, int high) {
  if (high >= low) {
    T mid = (low + high) / 2;
    if (vector[mid] == x) {
      return mid;
    } else {
      if (vector[mid] > x)
        return binarySearch(vector, x, low, mid - 1);
      else
        return binarySearch(vector, x, mid + 1, high);
    }
  }

  std::cout << high << " " << low << "\n";
  return -1;
}

int main(int argc, char** argv) {
  std::vector<Type> vector = {3, 4, 5, 6, 7, 8, 9};
  Type x = 4;
  int result = binarySearch(vector, x, 0, vector.size() - 1);
  if (result == -1)
    std::cout << "Element not found"
              << "\n";
  else
    std::cout << "Element is found at index " << result << "\n";
}