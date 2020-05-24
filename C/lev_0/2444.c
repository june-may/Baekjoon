#include <stdio.h>

int main(){

	int num;
	scanf("%d", &num);
	if(num < 0 || num > 100) return 0;

	for(int i = 0 ; i < num ; i++){
		for(int j = i ; j < num-1 ; j++)
			printf(" ");
		for(int k = 0 ; k < (i*2)+1 ; k++)
			printf("*");
		printf("\n");
	}

	for(int i = 0 ; i < num - 1 ;i++){
	
		for(int j = 0 ; j <= i; j++)
			printf(" ");
		for(int k = 2*i ; k < (num-1)*2 - 1 ; k++)
			printf("*");
		printf("\n");
	
	}
	
}
