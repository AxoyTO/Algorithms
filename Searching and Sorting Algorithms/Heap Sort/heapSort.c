#include <stdio.h>
#include <stdlib.h>

#define watch(x) printf("%s is %d\n", #x, x)

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
  printf("%d ", node->key);
  while (i < n / 2) {
    if (node->left != NULL)
      printf("%d ", node->left->key);
    if (node->right != NULL)
      printf("%d ", node->right->key);

    if (i % 2 == 0) {
      node = node->left;
    } else {
      node = node->up->right;
    }
    i++;
  }
  printf("\n");
}

struct Node* arrayToTree(int array[], int n) {
  int i = 0;
  struct Node* root = (struct Node*)malloc(sizeof(struct Node));
  root->key = array[i];
  root->up = NULL;
  int level = 1;
  struct Node* node = root;
  int left = 2 * i + 1;
  while (i < n / 2) {
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n) {
      node->left = (struct Node*)malloc(sizeof(struct Node));
      node->left->key = array[left];
      node->left->up = node;
    }
    if (right < n) {
      node->right = (struct Node*)malloc(sizeof(struct Node));
      node->right->key = array[right];
      node->right->up = node;
    }

    if (i % 2)
      node = node->up->right;
    if (i % 2 == 0) {
      node = node->left;
    }
    i++;
  }
  printf("Tree: ");
  printTree(root, n);
  return root;
}

void swap(int* a, int* b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void heapify(struct Node* root) {
  // Find largest among root, left child and right child
  int max = root->key;

  struct Node* left = root->left;
  struct Node* right = root->right;

  if (left != NULL && left->key > max)
    max = left->key;

  if (right != NULL && right->key > max)
    max = right->key;

  // Swap and continue heapifying if root is not largest

  if (max != root->key) {
    if (left != NULL && max == left->key)
      swap(&left->key, &root->key);

    if (right != NULL && max == right->key) {
      swap(&right->key, &root->key);
    }

    if (root->left)
      heapify(root->left);
    if (root->right)
      heapify(root->right);
  }
}

void heapSort(struct Node* root, int array[], int n) {
  while (1) {
    // printf("%d\n", root->key);
    if (root->right) {
      if (root->right->left)
        root = root->right;
    } else
      break;
  }

  int i = 0;
  for (i = 0; i < n / 2; i++) {
    heapify(root);
    if (!i % 2)
      root = root->up->left;
    else {
      if (root->up)
        root = root->up;
    }
  }

  for (i = 0; i < n; i++) {
    array[n - i - 1] = root->key;
    while (1) {
      if (i == 2 || i == 3) {
        if (root->left)
          root = root->left;
      }
      if (root->right) {
        root = root->right;
      } else {
        if (root->left)
          root = root->left;
        break;
      }
    }

    int key = root->key;
    if (root->up) {
      root = root->up;
      if (root->right && root->right->key == key)
        root->right = NULL;
      if (root->left && root->left->key == key)
        root->left = NULL;
    }

    while (1) {
      if (root->up)
        root = root->up;
      else
        break;
    }
    swap(&root->key, &key);
    heapify(root);
  }
}

int main(int argc, char** argv) {
  int array[] = {1, 12, 9, 5, 6, 10};
  int n = 6;
  printArray(array, n);
  struct Node* root = arrayToTree(array, n);
  heapSort(root, array, n);
  printArray(array, n);
}