
#include <iostream>
#include <vector>

using type = int;

int main(int argc, char** argv) {
  int n = 25;
  int existing_num_to_search = 100;
  int non_existing_num_to_search = 101;
  std::vector<type> array(n, 0);

  auto generateArray = [&array, &n]() -> void {
    for (int i = 0; i < n; i++) {
      if (i == n / 2)
        array[i] = 100;
      else
        array[i] = rand() % 100;
    }
  };

  auto printArray = [](const std::vector<type>& array) {
    for (const auto& v : array)
      std::cout << v << " ";
    std::cout << "\n";
  };

  auto linearSearch = [](const std::vector<type>& array, int x) -> int {
    for (int i = 0; i < array.size(); i++)
      if (array[i] == x)
        return i;
    return -1;
  };

  generateArray();
  printArray(array);

  int index = linearSearch(array, existing_num_to_search);
  if (index != -1)
    printf("Element %d is at index %d.\n", existing_num_to_search, index);
  else
    printf("Element %d not found.\n", existing_num_to_search);

  if (linearSearch(array, non_existing_num_to_search) == -1)
    printf("Element %d not found.\n", non_existing_num_to_search);
  return 0;
}