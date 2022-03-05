
#include <stdio.h>
#include <stdlib.h>

void printArray(int* array) {
  int n = 0;
  while (*(array + (n++)))
    ;
  n--;

  for (int i = 0; i < n; i++) {
    printf("%d ", *(array + i));
  }
  printf("\n");
}

void generateArray(int* array, int n) {
  for (int i = 0; i < n; i++) {
    if (i == n / 2)
      *(array + i) = 100;
    else
      *(array + i) = rand() % 100;
  }
}

int linearSearch(int* array, int x) {
  int k = 0;
  while (*(array + (k++)))
    ;
  k--;

  for (int i = 0; i < k; i++) {
    if (*(array + i) == x)
      return i;
  }

  return -1;
}

int main(int argc, char** argv) {
  int n = 25;
  int existing_num_to_search = 100;
  int non_existing_num_to_search = 101;
  int* array = (int*)malloc(sizeof(int) * n);
  generateArray(array, n);
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