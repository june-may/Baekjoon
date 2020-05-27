#include <stdio.h>

int main(){

	int num;
	int arr[1000];
	
	scanf("%d", &num);

	for(int i = 0 ; i < num ; i++)
		scanf("%d", &arr[i]);

	for(int i = 0 ; i < num-1 ; i++){
		for(int j = 0 ; j < num-i-1 ; j++){
			if(arr[j] > arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
		
	}

	for(int i = 0 ; i < num ; i++){
		printf("%d\n", arr[i]);
	}
}
