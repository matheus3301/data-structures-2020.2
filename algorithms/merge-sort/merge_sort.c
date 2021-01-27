#include "merge_sort.h"
#define INF 10e4

void merge(int v[], int p, int q, int r);

void merge_sort(int* v, int p, int r) {
  if (p < r) {
    int q = (p + r) / 2;
    merge_sort(v, p, q);
    merge_sort(v, q + 1, r);
    merge(v, p, q, r);
  }
}

void merge(int v[], int p, int q, int r) {
  int i, j, k;
  int n1 = q - p + 1;
  int n2 = r - q;

  int L[n1], R[n2];

  for (i = 0; i < n1; i++)
    L[i] = v[p + i];
  for (j = 0; j < n2; j++)
    R[j] = v[q + 1 + j];

  i = 0;
  j = 0;
  k = p;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      v[k] = L[i];
      i++;
    } else {
      v[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    v[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    v[k] = R[j];
    j++;
    k++;
  }
}