#include <stdio.h>

int main(){

	int a, b, c;
	int add = 0;
	int total = 0;
	int i;

	scanf("%d %d %d", &a, &b, &c);
	
	if(c <= b)
		printf("-1");
	else
		printf("%d\n", (a/(c-b))+1);

}
