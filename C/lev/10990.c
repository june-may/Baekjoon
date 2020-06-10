#include <stdio.h>

int main(){

	int num;
	scanf("%d", &num);

	if(num < 0 || num > 100) return 0;
	
	for(int i = 0 ; i < num ; i ++){
		
		for(int j = i ; j < num-1 ; j++)
			printf(" ");
		printf("*");

		if(i!=0){
			for(int k = 0 ; k < (i*2)-1; k++)
				printf(" ");
			printf("*");
		}
		printf("\n");
	}
}
