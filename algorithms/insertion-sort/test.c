#include <stdio.h>
#include "insertion_sort.h"

int main() {
  int n;
  scanf("%d", &n);
  int v[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);

  insertion_sort(v, n);

  for (int i = 0; i < n; i++)
    printf("%d ", v[i]);

  printf("\n");

  return 0;
}