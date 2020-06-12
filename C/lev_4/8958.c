#include <stdio.h>
#include <string.h>
#define MAX 80

int main(){
	
	int i, j, num, score, sum = {0};
	char OX[80];

	scanf("%d ", &num);

	for(i = 0 ; i < num ; i++){
		score = 1;
		sum = 0;
		scanf("%s", OX);

		for(j = 0 ; j < strlen(OX); j++){
			
			if(OX[j] == 'O')
				sum += score++;
			if(OX[j] == 'X')
				score = 1;
		}		
		printf("%d\n", sum);		
	}
	
}
