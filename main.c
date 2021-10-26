#include "sorting_lib.h"
#include "auxiliary_functions.h"
#include "testing_functions.h"

int main() {
  int length;
  for (int i = 0; i < 10; i++) { 
    int * a = generate_array(&length);
    selection_sort(a, length);
    is_sorted(a, length) ? printf("Sorted.\n") : printf("Not Sorted.\n");
    free(a);
  }

}
