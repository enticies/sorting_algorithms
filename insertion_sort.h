#ifndef _INSERTION_SORT_H
#define _INSERTION_SORT_H

#include "swap.h"

void insertion_sort(int * array, int length) {
  for (int i = 1; i < length; i++) {
    int j = i;
    while (j > 0 & array[j-1] > array[j]) {
      swap(array, length, j, j-1);
      j--;
    }
  }
}

#endif
