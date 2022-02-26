#include <iostream>
#include <vector>

void printArray(const std::vector<float>& vec) {
  for (const auto& v : vec) {
    std::cout << v << " ";
  }
  std::cout << "\n";
}

void insertionSort(std::vector<float>& array) {
  for (int i = 1; i < array.size(); i++) {
    float key = array[i];
    int j = i - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }

    array[j + 1] = key;
  }
}

void bucketSort(std::vector<float>& array) {
  std::vector<std::vector<float>> buckets;
  for (const auto& v : array)
    buckets.emplace_back(0);

  for (const auto& v : array) {
    int bucket_index = int(v * 10);
    buckets[bucket_index].push_back(v);
  }

  for (int i = 0; i < buckets.size(); i++) {
    insertionSort(buckets[i]);
  }

  int index = 0;
  for (const auto& bucket : buckets) {
    for (const auto& s : bucket) {
      array[index] = s;
      index++;
    }
  }
}

int main(int argc, char** argv) {
  std::vector<float> array = {.11, .9, .21, .8, .17, .19, .13, .1, .24, .12};
  std::cout << "Unsorted Array:\n";
  printArray(array);
  bucketSort(array);
  std::cout << "Sorted Array:\n";
  printArray(array);

  return 0;
}