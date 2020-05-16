#include <stdio.h>

int main(){
	
	int score[5];
	int total = 0 ;

	for(int i = 0 ; i < 5 ; i++){
		scanf("%d", &score[i]);
		
		if(score[i] < 40 && score[i] >= 0)
			score[i] = 40;
		
		total += score[i];
	}

	printf("%d\n", total/5);
}
