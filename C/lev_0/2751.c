#include <stdio.h>

int main(){

	int num;
	int arr[1000000];

	scanf("%d", &num);
	if(num < 1 || num > 1000000) return 0;

	for(int i = 0 ; i < num ; i ++)
		scanf("%d", &arr[i]);

	for(int i = 1; i < num; i++){
		int key = arr[i];
		int j = i - 1;

		while(j >= 0 && key > arr[j]){
			arr[j+1] = arr[j];
			j = j +1;
		}
		arr[j+1] = key;
	
	}


	for(int i = 0 ; i < num ; i ++)
		printf("%d\n", arr[i]);

}
