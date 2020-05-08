#include <stdio.h>

int main(void)
{
	int A,B;
	int T;

	scanf("%d",&T);

	for(int i=1;i<T+1;i++){
		scanf("%d %d",&A,&B);
		if(A>0 && B<10){
			printf("Case #%d: %d\n", i, A+B);
		}
	}
	return 0;
}
