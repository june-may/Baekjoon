#include <stdio.h>

int main(){
	
	int a;

	scanf("%d", &a);
	
	int sum = a;

	while(1){
		int total = 0;
		
		if(sum <  10)
			sum*=10;
		
		total = sum % 10;
		total = total + ( sum / 10);
		printf("%d \n", total);
		if(total == a) break;
		sum = total;
	}



}
