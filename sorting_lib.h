#ifndef _SORTING_LIB_H
#define _SORTING_LIB_H

#include "auxiliary_functions.h"

void bogo_sort(int * array, int length) {
  // destroy the universe every iteration
  while (!is_sorted(array, length)) {
    shuffle(array, length);
  }
}

void quick_sort(int * array, int low, int high) {
  if (low < high) {
    int pivot_index = partition(array, high);
    quick_sort(array, low, pivot_index - 1);
    quick_sort(array, pivot_index+1, high);
  }
}

void bubble_sort(int * array, int length) {
  while (!is_sorted(array, length)) {
    for (int i = 0; i < length - 1; i++) {
      if (array[i] > array[i+1]) {
        swap(array, length, i, i+1);
      }
    }
  }
}

void insertion_sort(int * array, int length) {
  for (int i = 1; i < length; i++) {
    int j = i;
    while ((j > 0) & (array[j-1] > array[j])) {
      swap(array, length, j, j-1);
      j--;
    }
  }
}

void exchange_sort(int * array, int length) {
  for (int i = 0; i < length; i++) {
    for (int j = i + 1; j < length; j++) {
      if (array[i] > array[j]) {
        swap(array, length, j, i);
      }
    }
  }
}

void selection_sort(int * array, int length) {
  for (int i = 0; i < length; i++) {
    int smallest = i;
    for (int j = i; j < length; j++) {
      if (array[smallest] > array[j]) {
        smallest = j;
      }
    }
    swap(array, length, smallest, i);
  }
}

#endif
