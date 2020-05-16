#include <stdio.h>

int main(){

	int num, i;
	scanf("%d", &num);
	
	if(num < 0 || num > 100) return 0;

	for(i = 1 ; i < num ; i++ ){
		for(int j = 0 ; j < i ; j++){
			printf("*");
		}
		printf("\n");
	}

	for(; i != 0 ; i--){
		for(int j = 0 ; j < i ; j++ ){
			printf("*");
		}
		printf("\n");
	}
}
