#include <stdio.h>

int main(){

	int num;
	scanf("%d", &num);
	if(num < 0 || num > 100) return 0;


	for(int i = 0 ; i < num; i++){
		for(int j = 0; j < i ; j++ )
			printf(" ");
		for(int k = 2*i; k < 2*num-1 ; k++)
			printf("*");
		printf("\n");
		
	}

}
