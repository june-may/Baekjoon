#include <stdio.h>

int main(){
	int num ;

	scanf("%d", &num);
	if(num < 0 || num > 100) return 0;

	for(int i = num; i > 0 ; i --){
		for(int j = i ; j > 0 ; j --){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
