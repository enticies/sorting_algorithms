#ifndef _PRINT_ARRAY_H
#define _PRINT_ARRAY_H

#include <stdio.h>

void print_array(int * a, int length) {
  for (int i = 0; i < length; i++) {
    printf("%d ", a[i]);
  }
  printf("\n");
}

#endif
