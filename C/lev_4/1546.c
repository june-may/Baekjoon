#include <stdio.h>
#define MAX 1000

int main(){
	
	int num;
	float score[MAX];
	int i ;
	float total = 0 ;
	float max = 0;

	scanf("%d", &num);

	for(i = 0 ; i < num ; i ++){
		scanf("%f", &score[i]);
		
		if(max < score[i])
			max = score[i];
	}
	
	for(i = 0 ; i < num ; i ++){
		total += (score[i]/max) * 100;
	}

	printf("%.2f\n" , total / num);
}
