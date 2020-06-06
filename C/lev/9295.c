#include <stdio.h>

int main(){
	
	int num;
	int sum[100];

	scanf("%d", &num);

	for(int i = 0 ; i < num ; i++){
		int a, b;

		scanf("%d %d", &a, &b);
		sum[i] = a+b;
	}

	for(int i = 0 ; i < num ; i++)
		printf("Case %d: %d\n", i+1,sum[i]);
}
