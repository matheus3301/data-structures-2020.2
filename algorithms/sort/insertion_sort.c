#include "insertion_sort.h"

void insertion_sort(int* v, int n) {
  int i, j, x;
  for (j = 1; j < n; j++) {
    x = v[j];
    i = j - 1;
    while (i >= 0 && v[i] > x) {
      v[i + 1] = v[i];
      i--;
    }
    v[i + 1] = x;
  }

}