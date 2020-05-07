#include <stdio.h>

int main()
{
	int n;
	int sum=0;

	scanf("%d",&n);

	if(n>0 && n<10001){
		for(int i=0 ; i<n+1 ; i++){
			sum+=i;
		}
	}

	printf("%d",sum);

	return 0;
}
