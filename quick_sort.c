#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "print_array.h"

void print_array(int * array, int length);
void quick_sort(int * array, int low, int high);
void swap(int * array, int length, int index1, int index2);
int partition(int * array, int low, int high);

int main() {
  int a[] = {-3211231, 3, 2311241, 1000, 1, 1, 1, 1, 32, -55};

  quick_sort(a, 0, 9);

  print_array(a, 10);
}

void quick_sort(int * array, int low, int high) {
  if (low < high) {
    int pivot_index = partition(array, low, high);
    quick_sort(array, low, pivot_index - 1);
    quick_sort(array, pivot_index+1, high);
  }
}

int partition(int * array, int low, int high) {
  int pivot_index = high;
  int i = 0;
  int j = -1;
  
  for (; i < high; i++){
    if (array[pivot_index] >= array[i]) {
      j++;
      swap(array, high+1, i, j);
    }
  }
  j++;
  swap(array, high+1, i, j);

  return j;
}

void swap(int * array, int length, int index1, int index2) {
  if (index1 < 0 || index2 < 0 || index1 > length - 1 || index2 > length - 1) {
    fprintf(stderr, "[DEBUG] index1: %d, index2: %d In function swap. Incorrect index. Exiting...\n", index1, index2);
    exit(1);
  }
  if (length < 0) {
    fprintf(stderr, "[DEBUG] In function swap. Incorrect length. Exiting...\n");
    exit(2);
  }
  int temp = array[index1];
  array[index1] = array[index2];
  array[index2] = temp;
}

