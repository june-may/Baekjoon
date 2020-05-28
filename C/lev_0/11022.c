#include <stdio.h>

int main(){

	int a, b;
	int num;
	scanf("%d", &num);

	for(int i = 0 ; i < num ; i++){
		scanf("%d %d", &a, &b);
		if(a < 0 || b > 10) return 0;
		printf("Case #%d: %d + %d = %d\n",i+1, a, b, a+b);
	}
}
