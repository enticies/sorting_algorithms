#ifndef _QUICK_SORT_H
#define _QUICK_SORT_H

#include "swap.h"

void quick_sort(int * array, int low, int high);
int partition(int * array, int high);

void quick_sort(int * array, int low, int high) {
  if (low < high) {
    int pivot_index = partition(array, high);
    quick_sort(array, low, pivot_index - 1);
    quick_sort(array, pivot_index+1, high);
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
