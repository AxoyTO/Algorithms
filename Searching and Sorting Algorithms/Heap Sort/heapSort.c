#include <stdio.h>
#include <stdlib.h>

struct Node {
  int key;
  struct Node *up, *left, *right;
};

void printArray(int array[], int n) {
  printf("Array: ");
  int i = 0;
  for (i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

void printTree(struct Node* root, int n) {
  int i = 0;
  struct Node* node = root;
  printf("%d ", root->key);
  while (i < n / 2) {
    if (node->left != NULL)
      printf("%d ", node->left->key);
    if (node->right != NULL)
      printf("%d ", node->right->key);

    if (i % 2)
      node = node->right;
    else
      node = node->left;
    i++;
  }
  printf("\n");
}

struct Node* arrayToTree(int array[], int n) {
  int i = 0;
  struct Node* root = (struct Node*)malloc(sizeof(struct Node));
  root->key = array[i];
  root->up = NULL;
  struct Node* node = root;
  int left = 2 * i + 1;
  while (i < n / 2) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n) {
      node->left = (struct Node*)malloc(sizeof(struct Node));
      node->left->key = array[left];
    }
    if (right < n) {
      node->right = (struct Node*)malloc(sizeof(struct Node));
      node->right->key = array[right];
    }

    if (i % 2) {
      node->right->up = node;
      node = node->right;
    }
    if (i % 2 == 0) {
      node->left->up = node;
      node = node->left;
    }
    i++;
  }
  printf("Tree: ");
  printTree(root, n);
  return root;
}

void heapify(struct Node* root, int n, int i) {
  // Find largest among root, left child and right child

  // Swap and continue heapifying if root is not largest
}

void heapSort(struct Node* root, int n) {
  // Build max heap

  // Heap sort
  // // Heapify root element to get highest element at root again
}

int main(int argc, char** argv) {
  int array[] = {1, 12, 9, 5, 6, 10};
  int n = 6;
  printArray(array, n);
  struct Node* root = arrayToTree(array, n);
  heapSort(root, n);
}