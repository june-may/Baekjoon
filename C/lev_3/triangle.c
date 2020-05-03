#include <stdio.h>

int main(){
	

	int i, j;
	int line;

	printf("Enter line number > ");
	scanf("%d", &line);

	for(i = 0 ; i < line ; i++) {
		for(j = 0 ; j <= i ; j ++){
			printf("** ");		
		}		
		printf("\n");
	}


	printf("Compelete Print !");
	return 0;
}
