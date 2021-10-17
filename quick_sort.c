#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_array(int * array, int length);
void quick_sort(int * array, int low, int high);
void swap(int * array, int length, int index1, int index2);
int partition(int * array, int low, int high);

int main() {
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
  
  for (int j = 0; j <= high; j++){
    if (array[pivot_index] >= array[j]) {
      swap(array, high+1, i, j);
      i++;
    }
  }

  return pivot_index;
}

void swap(int * array, int length, int index1, int index2) {
  if (index1 < 0 || index2 < 0 || index1 > length - 1 || index2 > length - 1) {
    fprintf(stderr, "[DEBUG] In function swap. Incorrect index. Exiting...\n");
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

void print_array(int * array, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", array[i]);
  }
  printf("\n");
}

