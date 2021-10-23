#ifndef _TESTING_FUNCTIONS_H
#define _TESTING_FUNCTIONS_H

#include <stdlib.h>
#include <time.h>

int random_int(int l, int r) { 
   int rand_num = (rand() % (r - l + 1)) + l;
   return rand_num;
}

// uses an out paramater so other functions can 
// use it. Needs to be freed after.
int * generate_array(int * length) {
  *length = random_int(0, 10);
  int * ret = (int *) malloc(sizeof(int) * (*length));

  for (int i = 0; i < (*length); i++) {
    ret[i] = random_int(0, 100);
  }

  return ret;
}

#endif
