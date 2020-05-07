#include <stdio.h>

int main()		{
	int N;

	scanf("%d", &N);

	if(N<1000001){
		for(int i=1;i<N+1;i++){
			printf("%d\n", i);
		}
	}

	return 0;
}
