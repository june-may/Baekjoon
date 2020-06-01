#include <stdio.h>

int main(){

	int num;
	int arr[1000000];

	scanf("%d", &num);
	if(num < 1 || num > 1000000) return 0;

	for(int i = 0 ; i < num ; i ++)
		scanf("%d", &arr[i]);

	for(int i = 0 ; i < num ; i ++){
		for(int j = i ; j < num-1 ; j++){
			if(arr[j] < arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}

	for(int i = 0 ; i < num ; i ++)
		printf("%d\n", arr[i]);

}
