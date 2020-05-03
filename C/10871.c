#include <stdio.h>

#define MAX 100

int main(){

	int n, x;
	int arr[MAX];

	scanf("%d %d", &n, &x);
	
	for(int i = 0; i < n - 1 ; i++ )
		scanf("%d ", &arr[i]);

	for(int i = 0 ; i < n - 1 ; i ++){
		if(arr[i] < x)
			printf("%d ", arr[i]);
	}

	printf("\n");

	return 0;
}

