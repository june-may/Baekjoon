#include <stdio.h>

int main(){

	int max;
	int num;
	int arr[10000];

	scanf("%d %d", &num, &max);

	for(int i = 0 ; i < num ; i ++){
		scanf("%d", &arr[i]);
		if(arr[i] < max)
			printf("%d ", arr[i]);
	}
}
