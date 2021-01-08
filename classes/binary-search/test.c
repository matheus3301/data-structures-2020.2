#include <stdio.h>
#include "binary_search.h"

int main(){
	int n;
	scanf("%d",&n);
	
	int v[n];

	for(int i = 0; i < n; i++){
		scanf("%d",&v[i]);
	}

	int op,tmp,ans;
	scanf("%d",&op);

	while(op--){
		scanf("%d",&tmp);
		ans = binary_search(v,n,tmp);
		if(ans == null)
			printf("NULL!\n");
		else
			printf("%d\n",ans);
	}

	return 0;
}
