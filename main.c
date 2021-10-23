#include "sorting_lib.h"
#include "auxiliary_functions.h"

#define LENGTH 5

int main() {
  int a[LENGTH] = {412421, -312312321, 0, 32, 222};

  insertion_sort(a, LENGTH);
  print_array(a, LENGTH);
  

}
