#include "insertion_sort.h"
#include "quick_sort.h"
#include "quick_sort.h"
#include "bogo_sort.h"
#include "print_array.h"

#define LENGTH 5

int main() {
  int a[LENGTH] = {2, 88, -1, 0, 999};
  
  quick_sort(a, 0, LENGTH-1);
  insertion_sort(a, LENGTH);
  bogo_sort(a, LENGTH);
  print_array(a, 5);

}
