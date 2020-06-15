#include <stdio.h>
#include <stdlib.h>

int main(){

	long long  num1, num2;
	long long sum = 0;

	scanf("%lld %lld", &num1 , &num2);
	sum = llabs(num1 - num2);
	printf("%lld\n",sum);

}
