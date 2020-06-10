#include <stdio.h>

int main(){


	int my;
	int you;
	scanf("%d %d", &my, &you);
	if(my > 10 || you > 10) return 0;

	if(my == you)
		printf("1\n");
	else
		printf("0\n";

	return 0;
}
