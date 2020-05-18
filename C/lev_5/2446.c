#include <stdio.h>

int main(){

	int num;
	int i , j;
	scanf("%d", &num);

	if(num >= 1 && num <= 100){
		for(i = 0 ; i < num ; i++){
			for(int k = 0; k < i ; k++ )
				printf(" ");
			for(j = 0 ; j <  2*(num-i) - 1 ; j++)
				printf("*");
			printf("\n");
		}

		for(i = 1 ; i < num ; i ++){
			for(int k = i ; k < num - 1 ; k++)
				printf(" ");
			for(j = 0 ; j < (2*i)+1 ; j++)
				printf("*");
			printf("\n");
		}
	}
}
