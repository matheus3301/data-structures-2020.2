#include <stdio.h>
#include <stdlib.h>
#include "merge_sort.h"

#define MAXN 100010

int n, v[MAXN];

int main() {
  scanf("%d", &n);

  int i;
  for (i = 0; i < n; i++) {
    scanf("%d", &v[i]);
  }

  merge_sort(v, 0, n - 1);
  for (i = 0; i < n; i++)
    printf("%d ", v[i]);

  printf("\n");

  return 0;
}