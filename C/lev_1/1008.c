#include <stdio.h>

int main(){

	double a, b;

	scanf("%lf %lf", &a, &b);

	if(a > 0 && b > 0)
		printf("%.9lf", a/b);

	return 0;
}
