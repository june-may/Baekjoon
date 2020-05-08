#include <stdio.h>

int main(void)
{
	int N;

	scanf("%d",&N);

	if(N<1000001){
		for(int i=N;i>0;i--){
			printf("%d\n",i);
		}    
	}
	return 0;
}
