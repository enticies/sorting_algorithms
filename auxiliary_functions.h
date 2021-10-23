#ifndef _AUXILIARY_FUNCTIONS_H
#define _AUXILIARY_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h>

int is_sorted(int * array, int length) {
  if (length < 2) {
    return 1;
  }
  for (int i = 0; i < length - 1; i++) {
    if (array[i] > array[i+1]) {
      return 0;
    }
  }
  return 1;
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

void print_array(int * a, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

// taken from stackoverflow
// credit goes to the user Nomadiq
// link: https://stackoverflow.com/a/10072899
void shuffle(int *array, size_t n) {
    struct timeval tv;
    gettimeofday(&tv, NULL);
    int usec = tv.tv_usec;
    srand48(usec);


    if (n > 1) {
        size_t i;
        for (i = n - 1; i > 0; i--) {
            size_t j = (unsigned int) (drand48()*(i+1));
            int t = array[j];
            array[j] = array[i];
            array[i] = t;
        }
    }
}

int partition(int * array, int high) {
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

#endif
