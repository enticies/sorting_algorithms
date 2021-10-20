#ifndef _SWAP_H
#define _SWAP_H

#include <stdio.h>
#include <stdlib.h>

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

#endif
