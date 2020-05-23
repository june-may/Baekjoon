#include <stdio.h>

int main(){
	int num ;

	scanf("%d", &num);
	if(num < 1 || num > 100) return 0;

	for(int i = 0 ; i < num ; i ++){
		
		for(int k = 0 ; k < i ; k++)
			printf(" ");
		for(int j = i ; j < num ; j++)
			printf("*");
		printf("\n");
	}
}
