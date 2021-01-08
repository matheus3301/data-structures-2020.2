#include "binary_search.h"

int binary_search(int*v, int n, int k){
	int lo = 0, hi = n-1, mid;

	while(lo <= hi){
		mid = (lo+hi)/2;
		if(v[mid] == k)
			return mid;
		else if(v[mid] < k)
			lo = mid + 1;
		else
			hi = mid - 1;
	}

	return null;
}
