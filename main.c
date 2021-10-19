#include "quick_sort.h"
#include "bogo_sort.h"
#include "print_array.h"

int main() {
  int a[] = {2, 88, -1, 0, 999};

  quick_sort(a, 0, 4);

  print_array(a, 5);
}
