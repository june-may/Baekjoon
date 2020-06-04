#include <stdio.h>

int main(){

	int i,j ;
	int num;
	int check = 1;

	while(check){
		scanf("%d", &num);

		for( i = 0 ; i < num ; i++){
			for(j = i ; j < num ; j++)
				printf("*");
			printf("\n");
		}

		printf("continue? (Yes = 1 / No = 0) ");
		scanf("%d", &check);
	}
}
