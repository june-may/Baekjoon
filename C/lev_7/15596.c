#include <stdio.h>
#define MAX 100

int sum(int a[], int N);

int main(){
	
	int n;
	int a[MAX] = {0};

	scanf("%d", &n);

	for(int i = 0 ; i < n ; i++)
		scanf("%d", &a[i]);

	printf("%d\n", sum(a, n));
}

int sum (int a[], int N){
	
	int total=0;

	for(int i = 0 ; i < N ; i++){
		total += a[i];
	}

	return total;
}
