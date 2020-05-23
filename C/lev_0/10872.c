#include <stdio.h>

int main(){
	int num;
	int total = 1;

	scanf("%d", &num);
	
	if(num < 0 || num > 12) return 0;

	for(int i = 1; i <= num ; i++)
		total *= i;

	printf("%d\n", total);
}
