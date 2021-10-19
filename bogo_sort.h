#include <sys/time.h>
#include <stdlib.h>

int is_sorted(int * array, int length);
void shuffle(int *array, size_t n);
int * bogo_sort(int * array, int length);

int * bogo_sort(int * array, int length) {
  // destroy the universe every iteration
  while (!is_sorted(array, length)) {
    shuffle(array, length);
  }
  return array;
}

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

