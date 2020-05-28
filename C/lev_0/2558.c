#include <stdio.h>

int main(){

	int a, b;
	scanf("%d", &a);
	if(a < 0) return 0;
	scanf("%d", &b);
	if(b > 10) return 0;

	printf("%d", a+b);
}
