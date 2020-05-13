#include <stdio.h>
#define MAX 80

int main(){
	
	int i, j, num, score[MAX] = {0};
	char OX[80];

	scanf("%d ", &num);

	for(i = 0 ; i < num ; i++){
		int plus = 0;

		for(j = 0 ; j < MAX ; j++){
			scanf("%c", &OX[j]);
			
			if(OX[j] == 'O')
				score[i] += ++plus;
			else
				plus = 0;
			
			if(OX[j]=='\0')
				break;
		}		
		
	}
	
	for(i = 0 ; i < num ; i++)
		printf("%d\n", score[i]);
}
